#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    minDist = 10;
    for(int i=0; i<NUMUNITS; i++){
        fly.push_back(units());
    }
    
    ofSetBackgroundAuto(false);
    ofSetBackgroundColor(30);
}

//--------------------------------------------------------------
void ofApp::update(){
    distance = ofDist(ofGetMouseX(),ofGetMouseY(),ofGetWindowWidth()/2,ofGetWindowHeight()/2);
    mapping = ofMap(distance,0,ofGetWindowHeight()/2,1.1,0.55);
    
    for(int i=0; i<NUMUNITS; i++){
        fly[i].move(mapping);
        fly[i].v1 = calculateV1(fly, i);
        fly[i].v2 = calculateV2(fly, i);
    }
    
    c += 0.05;
    noise = ofNoise(c);
    noise = ofMap(noise,0,1,0,255);
    
    if(c>20){
        c = 0;
    };
    
    cout << mapping;
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < NUMUNITS; i++){
        fly[i].draw();
    }
    
    ofSetColor(noise+c*5,noise+c*10,noise+c*20);
}

//--------------------------------------------------------------
ofVec2f ofApp::calculateV1(vector<units> Units, int index){
    
    ofVec2f pCenter = ofVec2f(ofGetMouseX(),ofGetMouseY());
    
    for(int i = 0; i < Units.size(); i++){
        if(i != index){
            pCenter -= Units[i].pos;
        }
    }
    pCenter = pCenter / (Units.size() -1);
    return (pCenter - Units[index].pos) / 100;
    
}

//--------------------------------------------------------------
ofVec2f ofApp::calculateV2(vector<units> Units, int index){
    
    ofVec2f dist;
    
    for(int i = 0; i < Units.size(); i++){
        if(i != index){
            if((Units[i].pos).distance(Units[index].pos) < 50){
                dist = dist - (Units[i].pos - Units[index].pos);
            }
        }
    }
    return dist/100;
    
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
