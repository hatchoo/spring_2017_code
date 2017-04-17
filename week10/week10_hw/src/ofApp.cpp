#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
//    forest1.load("white.mp3");
//    forest1.setMultiPlay(false);
//    forest1.play();
//    
//    forest2.load("bird.mp3");
//    forest2.setMultiPlay(true);
//    
//    forest3.load("frogs.mp3");
//    forest3.setMultiPlay(true);
//    
//    forest4.load("growl.mp3");
//    forest4.setMultiPlay(true);
//    
//    forest5.load("tree.mp3");
//    forest5.setMultiPlay(true);
//    
//    forest6.load("water.mp3");
//    forest6.setMultiPlay(true);
    //mySoundStream.setup(this, 0, 2, 44100, 256, 4)
    
    forestSoundsLoad[
    forest1.load("white.mp3"),
    forest2.load("bird.mp3"),
    forest3.load("frogs.mp3"),
    forest4.load("growl.mp3"),
    forest5.load("tree.mp3"),
    forest6.load("water.mp3")
    ];
    
    forest1.play();

    
    for(int i=0;i<6;i++){
        forestSoundsLoad[i];
    };
    
    ofSetBackgroundColor(57, 66, 47);
    
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
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
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
    
    int num = ofRandom(0,5);
    
    
    if(num == 0){
        forest2.play();
        pointLight.setDiffuseColor(ofColor(0,255,0));
        pointLight.setSpecularColor(ofColor(255,255,255));
    }else if(num == 1){
        forest3.play();
        pointLight.setDiffuseColor(ofColor(0,0,255));
        pointLight.setSpecularColor(ofColor(255,255,255));
    }else if(num == 2){
        forest4.play();
        pointLight.setDiffuseColor(ofColor(0,255,255));
        pointLight.setSpecularColor(ofColor(255,255,255));
    }else if(num == 3){
        forest5.play();
        pointLight.setDiffuseColor(ofColor(255,255,0));
        pointLight.setSpecularColor(ofColor(255,255,255));
    }else if(num == 4){
        forest6.play();
        pointLight.setDiffuseColor(ofColor(255,0,255));
        pointLight.setSpecularColor(ofColor(255,255,255));
    };
    
    cout << num;
    
    
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
