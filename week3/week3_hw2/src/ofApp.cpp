#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(100, 200, 250);
    
    for(int i=0; i<SMALL; i++){
    small[i].theta = TWO_PI/SMALL * i;
    small[i].radius = 5;
    small[i].speed = 25;
    small[i].orbitRadius = 250;
    small[i].maxSize = 70;
    small[i].minSize = 10;
    }
    
    for(int i=0; i<SMALL2; i++){
    small2[i].theta = TWO_PI/SMALL2 * i;
    small2[i].radius = 4;
    small2[i].speed = 20;
    small2[i].orbitRadius = 200;
    small2[i].maxSize = 30;
    small2[i].minSize = 5;
    }

}

//--------------------------------------------------------------
void ofApp::update(){
//    position.set(ofGetWindowWidth()/2+x,ofGetWindowHeight()/2+y);
//    theta += 0.001 * speed;
//    x = sin(theta) * orbitRadius;
//    y = cos(theta) * orbitRadius;
    
    for(int i =0; i<SMALL; i++){
        small[i].update();
    }
    for(int i=0; i<SMALL2; i++){
        small2[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofSetColor(255,0,0);
//    ofDrawCircle(position,radius);
    
    for(int i=0; i<SMALL; i++){
        small[i].draw();
    }
    for(int i=0; i<SMALL2; i++){
    small2[i].draw();
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
