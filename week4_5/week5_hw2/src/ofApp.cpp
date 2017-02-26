#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    theta = 0;
    ofSetBackgroundAuto(false);
    ofSetBackgroundColor(30);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    c += 0.05;
    ofSetColor(ofMap(ofNoise(c),0,1,100,255));

    x+=6;
    y+=5;
    //size = ofRandom(10,50);
    size = ofMap(ofNoise(ofRandom(10,50)),0,1,1,5);
    
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofDrawRectangle(ofNoise(ofMap(x,0,ofGetWindowHeight(),0,1))*1000, ofNoise(ofMap(y,0,ofGetWindowHeight(),0,1))*ofGetWindowHeight(), size, size);

    cout << x;
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
    ofSetColor(255,255,255,50);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    ofSetColor(ofRandom(50),ofRandom(50)),ofRandom(255);
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
