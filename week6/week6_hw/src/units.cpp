//
//  units.cpp
//  week6_hw
//
//  Created by Jasmine Xie on 5/3/2017.
//
//

#include "units.hpp"

units::units(){
    pos = ofVec2f(ofGetWindowWidth()/2 + ofRandom(-30, 30), ofGetWindowHeight()/2 + ofRandom(-30,30));
    vel = ofVec2f(0);
}

void units::update(){
    
}

void units::draw(){
    ofDrawRectangle(pos,size,size);
}

void units::move(float inhibitor){
    vel = vel*inhibitor + v1 + v2 + v3;
    pos = pos + vel;
}

