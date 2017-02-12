#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    planet.set(ofGetWindowWidth()/2,ofGetWindowHeight()/2,0);
    
    speed = 10;
    radius = 5;
    orbitRadius = 100;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    theta+=0.01*speed;
    
    y = sin(theta) * orbitRadius;
    z = cos(theta) * orbitRadius;
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix();
    ofTranslate(-50,150);
    ofRotate(ofGetFrameNum() *1, 50, 20, 1);
    if(z>0){
        ofSetColor(255,0,0);
        ofDrawCircle(planet, 50);
        ofSetColor(255);
        ofDrawRectangle(planet.x+y, planet.y, z, radius,radius);
    }else{
        ofSetColor(255);
        ofDrawRectangle(planet.x+y, planet.y, z, radius,radius);
        ofSetColor(255,0,0);
        ofDrawCircle(planet, 50);
    }
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
