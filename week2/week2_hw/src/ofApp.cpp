#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(50, 50, 50);
    ofSetBackgroundAuto(true);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    mousePos = ofVec2f(ofGetMouseX(),ofGetMouseY());
    position = ofVec2f(ofGetMouseX(),ofGetMouseY());
    
    C = ofMap(ofGetMouseX(),0,ofGetWidth(),0,50);
    S = ofMap(ofGetMouseX(),0,ofGetWidth(),0,50);
    
    
    angleC = C;
    angleS = -S;
    
    y = cos(angleC)*50;
    x = sin(angleS)*50;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawRectangle((position)+(x,y),10, 10);
    ofSetColor(255,100,100);
    ofDrawRectangle((position)+(x,y)*-1, 10, 10);
    
    ofSetColor(255);
    //ofDrawLine(mousePos, position);
    
    
    
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
