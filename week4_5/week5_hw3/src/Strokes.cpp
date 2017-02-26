//
//  Strokes.cpp
//  week5_hw3
//
//  Created by Jasmine Xie on 26/2/2017.
//
//

#include "Strokes.hpp"

Strokes::Strokes(){

}

void Strokes::update(){

    x+=6;
    y+=5;
    size = ofMap(ofNoise(ofRandom(10,50)),0,1,1,5);
}

void Strokes::draw(){
    ofSetRectMode(OF_RECTMODE_CENTER);
    ofDrawRectangle(ofNoise(ofMap(x,0,ofGetWindowHeight(),0,1))*ofRandom(500,ofGetWindowWidth()), ofNoise(ofMap(y,0,ofGetWindowHeight(),0,1))*ofRandom(500,ofGetWindowHeight()), size, size);
    
}
