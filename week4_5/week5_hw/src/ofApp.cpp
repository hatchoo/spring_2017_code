#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetWindowShape(400, 400);
    ofSetBackgroundColor(30, 30, 40);
    ofSetFrameRate(30);
    ofSetColor(220,220,220);
}

//--------------------------------------------------------------
void ofApp::update(){
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    for(int i=0;i<SQUARENUM;i++){
        for(int j=0;j<SQUARENUM;j++){
            size = ofRandom(10,50);
            ofSetRectMode(OF_RECTMODE_CENTER);
            ofDrawRectangle(50*i+ofRandom(4),50*j+ofRandom(4),size,size);
        }
    }
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
    ofSetColor(ofRandom(10,20), ofRandom(30,55), ofRandom(50,85),ofRandom(200,255));
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    ofSetColor(220,220,220,ofRandom(200,255));
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
