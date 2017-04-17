///////ofapp.cpp
#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    mySoundPlayer.load("meow.wav");
    mySoundPlayer.setMultiPlay(true);
    mySoundStream.setup(this, 0, 2, 44100, 256, 4);
    
    bufferSize = 256;
    
    left.assign(bufferSize, 0);
    right.assign(bufferSize, 0);
    volHistory.assign(400, 0);
    
    ofSetVerticalSync(true);
    cam.setDistance(0);
    cam.enableMouseInput();
    cout << cam.getFov() << endl;
    cam.setFov(60);
    cout << cam.getFarClip() <<endl;
    sizeOfGrid = 100;
    
    width = 10;
    height = 200;
    depth = 10;
    spacing = 10;
    
    numRows = sizeOfGrid / 10;
    numCols = sizeOfGrid / numRows;
    
    for (int i = 0; i < sizeOfGrid; i ++){
        //box[i].setPosition((i%numCols) * width + spacing * (i%numCols), 0, (i % numRows) * depth + spacing * (i % numRows));
        box[i].setPosition( i * spacing + i * width, 0, numRows * spacing * (i % numCols));
    }
    
    pointLight.setPosition(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 10);
    
    pointLight.setDiffuseColor(ofColor(255,0,0));
    pointLight.setSpecularColor(ofColor(255,255,255));
    
    myMaterial.setShininess(120);
    //myMaterial.setDiffuseColor(ofColor(0,255,0));
    //myMaterial.setEmissiveColor(ofColor(0,0,255));
    
}

//--------------------------------------------------------------
void ofApp::update(){
    cout << vol << endl;
    scaledVol = ofMap(vol, 0, 0.17, 100, 1000);
    volHistory.push_back(scaledVol);
    
    if(volHistory.size() >= 100){
        volHistory.erase(volHistory.begin(), volHistory.begin() +1);
    }
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
        box[i].set(width, volHistory[i], depth);
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
    mySoundPlayer.setSpeed(ofMap(x, 0, ofGetWindowWidth(), 0, 5));
    mySoundPlayer.play();
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

void ofApp::audioIn(float * input, int bufferSize, int nChannels){
    
    float currentVol = 0;
    
    int numCounted = 0;
    
    for(int i = 0; i< bufferSize; i++){
        left[i] = input[i*2]*0.5;
        right[i] = input[i*2 +1] * 0.5;
        
        numCounted += 2;
        
        currentVol += left[i] * left[i];
        currentVol += right[i] * right[i];
        
        currentVol /= numCounted;
        
        currentVol = sqrt(currentVol);
        
        vol = currentVol;
        vol *= 0.9;
        vol += 0.07 * currentVol;
        
    }
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
