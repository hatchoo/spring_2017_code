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
        r[i] = ofRandom(150,220);
        g[i] = ofRandom(150,226);
        b[i] = ofRandom(150,232);
        
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
            
            int radianceR, radianceG, radianceB;
            
            distance = ofDist(firefly[i].x, firefly[i].y, firefly[j].x, firefly[j].y);
            radianceR = ofMap(distance,0,100,r[j],r[i]);
            radianceG = ofMap(distance,0,100,g[j],g[i]);
            radianceB = ofMap(distance,0,100,b[j],b[i]);
            
            if(distance <100){
                firefly[i].colour(r[j],g[j],b[j],50);
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
    
    
    ofSetColor(10, 20, 30,50);
    ofDrawRectangle(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
    
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
