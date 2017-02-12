//
//  small.cpp
//  week3_hw2
//
//  Created by Jasmine Xie on 11/2/2017.
//
//

#include "small.hpp"

Small::Small(){
    
}

void Small::update(){

    
    if(radius>=maxSize){
        magnifier = -1;
    }else
if(radius<= minSize){
        magnifier = 1;
    }
    
    radius = radius +1*magnifier;
    
    theta += (0.001 * speed);
    float x = cos(theta) * orbitRadius;
    float y = sin(theta) * orbitRadius;
    position.set(ofGetWindowWidth()/2+x,ofGetWindowHeight()/2+y);
}

void Small::draw(){
    
   
    ofDrawCircle(position, radius);
}
