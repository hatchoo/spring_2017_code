#include "ofApp.h"

//questions
//adding lines with each mousepress
//  how to stop lines
//error messages

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(33, 43, 61);
    ofSetBackgroundAuto(false);
    ofSetWindowShape(1000, 700);
    
    for(int i=0; i<NUM; i++){
        stars[i].setup(2.5);
        stars2[i].setup(1.5);
        stars3[i].setup(1);
        stars4[i].setup(1);
        stars5[i].setup(1.5);
        
        r[i] = ofRandom(230,255);
        g[i] = ofRandom(230,255);
        b[i] = ofRandom(230,255);
    };
    
    for(int i=0; i<NUM; i++){
        opacity[i] = 0;
    };
    
    starrysky.load("starrysky.mp3");
    starrysky.play();
    starrysky.setLoop(true);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    for(int i=0;
        i<NUM; i++){
    oscilation[i] = ofRandom(200);

    if(ofGetElapsedTimef()>5 && ofGetElapsedTimef()<12){
        opacity[i]++;
    };
    };
    
    for(int i=0; i<NUM; i++){
    if(ofGetElapsedTimef()>13){
        opacity[i] = oscilation[i];
    };
    }
    
    //cout << opacity[5] << endl;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(33, 43, 61,150);
    ofDrawRectangle(0, 0, ofGetWindowWidth(), ofGetWindowHeight());
    
    if(ofGetElapsedTimef()>5){
        for(int i=0; i<NUM+300; i++){
            stars5[i].colour(r[i],g[i],b[i],opacity[i]);
            stars5[i].draw();
            
            
                distance = ofDist(stars5[i].x, stars5[i].y, ofGetMouseX(), ofGetMouseY());
                
                if(distance < 100){
                    stars5[i].glow(opacity[i]);
               
            }
        }
    }
    
    ofPushMatrix();
    ofTranslate(ofGetWindowWidth()/2,ofGetWindowHeight()+ofGetWindowHeight()*0.5);
    if(ofGetElapsedTimef()>5){
        for(int i=0; i<NUM; i++){
            stars3[i].movement(0.0001, 270);
            stars3[i].colour(r[i],g[i],b[i],opacity[i]);
            stars3[i].draw();
        }
    }
    ofPopMatrix();

    ofPushMatrix();
        ofTranslate(ofGetWindowWidth()/2,ofGetWindowHeight()+ofGetWindowHeight()*0.5);
        for(int i=0; i<NUM; i++){
            stars4[i].movement(0.0005, 0);
            stars4[i].colour(r[i],g[i],b[i],255);
            stars4[i].draw();
            stars2[i].movement(0.0005, 0);
            stars2[i].colour(r[i],g[i],b[i],255);
            stars2[i].draw();
            stars[i].movement(0.0015, 0);
            stars[i].colour(r[i],g[i],b[i],255);
            stars[i].draw();
        };
    ofPopMatrix();
    
    

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
    for(int i=0; i<NUM; i++){
        distance = ofDist(stars5[i].x, stars5[i].y, ofGetMouseX(), ofGetMouseY());
        
//            ofDrawLine(stars[i].x, stars[i].y, ofGetMouseX(), ofGetMouseY());
//            ofSetColor(255);
//            linePosition.push_back(ofVec2f(stars[i].x,stars[i].y));
//            cout << linePosition[0] << endl;
        }
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
