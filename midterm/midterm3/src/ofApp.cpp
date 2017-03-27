#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofSetWindowShape(1000, 700);
    ofSetBackgroundColor(10, 20, 30);
    
    for (int i=0; i<NUM; i++){
        firefly[i];
    }
    
        for (int i=0; i<NUM; i++){
            r[i] = ofRandom(193,220);
            g[i] = ofRandom(200,226);
            b[i] = ofRandom(102,132);
    
            //cout << r[i] << endl;
        };
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i=0; i<NUM; i++){
        firefly[i].update();
    };

        for(int i=0; i<NUM; i++){
            for(int j=0; j<NUM; j++){
                if (i == j)
                    continue;
    
                distance = ofDist(firefly[i].x, firefly[i].y, firefly[j].x, firefly[j].y);
                radiance = ofMap(distance,0,100,200,0);
    
                if(distance <100){
                    firefly[i].colour(r[i]+radiance,g[i]+radiance,b[i]+radiance,radiance);
                    //cout << "hit!" << endl;
                    break;
                }else{
                    firefly[i].colour(r[i],g[i],b[i],50);
                    //cout << "not" << endl;
                }
            }
        };
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for (int i=0; i<NUM; i++){
        firefly[i].draw();
    };
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
