#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    water.load("water.mp3");
    water.play();
    water.setLoop(true);
    
    ofSetVerticalSync(true);
    sizeOfGrid = 100;
    
    numRows = sizeOfGrid / 10;
    numCols = sizeOfGrid / numRows;
    
    
    ofSetVerticalSync(true);
    cam.setDistance(0);
    cam.enableMouseInput();
    cout << cam.getFov() << endl;
    cam.setFov(60);
    cout << cam.getFarClip() <<endl;
    sizeOfGrid = 100;
    
    width = 50;
    height = 200;
    depth = 10;
    spacing = 1;
    
    for (int i = 0; i < sizeOfGrid; i ++){
        box[i].setPosition( i * spacing + i * width, 0, numRows * spacing * (i % numCols));
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){

    int distance;
    distance = ofDist(ofGetMouseX(), ofGetMouseY(), ofGetWindowWidth()/2, ofGetWindowHeight()/2);
    
    r = ofMap(distance,0,ofGetWindowWidth()/1.5,99,48);
    g = ofMap(distance,0,ofGetWindowWidth()/1.5, 255,85);
    b = ofMap(distance,0,ofGetWindowWidth()/1.5,218,186);
    
    pointLight.setPosition(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 10);
    pointLight.setDiffuseColor(ofColor(r,g,b,250));
    pointLight.setSpecularColor(ofColor(0,0,0,200));
    myMaterial.setShininess(250);
    
    water.setVolume(ofMap(distance,0,ofGetWindowWidth()/1.5,1.0,0.1));
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    cam.begin();
    
    ofPushMatrix();
    ofEnableLighting();
    pointLight.enable();
    pointLight.draw();
    
    ofTranslate(- ofGetWindowWidth()/2, 0);
    
    myMaterial.begin();
    for (int i = 0; i < sizeOfGrid; i ++){
        box[i].set(width, height, depth);
        box[i].draw();
    }
    myMaterial.end();
    ofPopMatrix();
    cam.end();

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
