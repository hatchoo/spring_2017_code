#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundAuto(true);
    ofBackground(50,50,50,50);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    angleC += 50;
    angleS += 50;
    y = cos(angleC)+10;
    x = sin(angleS)*100;
    
    angleC2 += 50;
    angleS2 += 50;
    b = cos(angleC2)+10;
    a = sin(angleS2)*100;
    
    angleC3 += 50;
    angleS3 += 50;
    d = cos(angleC3)*50;
    c = sin(angleS3)*50;
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);
    
    ofDrawRectangle(x+ofGetWindowWidth()/2,ofGetWindowHeight()/2,7,7);
    
    ofDrawRectangle(ofGetWindowWidth()/2,a+ofGetWindowHeight()/2,7,7);
    
    ofDrawRectangle(ofGetWindowWidth()/2+d,ofGetWindowHeight()/2+c,5,5);


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
