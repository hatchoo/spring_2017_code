#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(50, 50, 50);
    ofSetBackgroundAuto(true);

    position = ofVec2f(ofGetWindowWidth() * 0.5, ofGetWindowHeight() * 0.5);
    velocity = ofVec2f(0);
    acceleration = ofVec2f(0);
    
    position2 = position+30;
    velocity2 = ofVec2f(0);
    acceleration2 = ofVec2f(0);
    
    position3 = position+50;
    velocity3 = ofVec2f(0);
    acceleration3 = ofVec2f(0);
    
    position4 = position+70;
    velocity4 = ofVec2f(0);
    acceleration4 = ofVec2f(0);
    
    position5 = position+90;
    velocity5 = ofVec2f(0);
    acceleration5 = ofVec2f(0);
    
    friction = 0.95;
    friction2 = 0.93;
    friction3 = 0.92;
    friction4 = 0.91;
    friction5 = 0.90;
    time = ofGetElapsedTimef();
    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
    mousePos = ofVec2f(ofGetMouseX(),ofGetMouseY());
    acceleration = (mousePos - position)/120;
    velocity *= friction;
    velocity += acceleration;
    position += velocity;
    
    
    acceleration2 = (mousePos - position2)/120;
    velocity2 *= friction2;
    velocity2 += acceleration2;
    position2 += velocity2;
    
    acceleration3 = (mousePos - position3)/120;
    velocity3 *= friction3;
    velocity3 += acceleration3;
    position3 += velocity3;
    
    acceleration4 = (mousePos - position4)/120;
    velocity4 *= friction4;
    velocity4 += acceleration4;
    position4 += velocity4;
    
    acceleration5 = (mousePos - position5)/120;
    velocity5 *= friction5;
    velocity5 += acceleration5;
    position5 += velocity5;
    
    float size = time*1;
    if(size >=5){
        ofResetElapsedTimeCounter();
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofDrawRectangle(position,10,10);
    ofDrawRectangle(position2,10,10);
    ofDrawRectangle(position3,10,10);
    ofDrawRectangle(position4,10,10);
    ofDrawRectangle(position5,10,10);
    
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
