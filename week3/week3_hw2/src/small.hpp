//
//  small.hpp
//  week3_hw2
//
//  Created by Jasmine Xie on 11/2/2017.
//
//

#pragma once
#include "ofMain.h"

class Small{
public:
    Small();
    void update();
    void draw();
    
    ofVec2f position;
    float radius;
    float orbitRadius;
    float speed;
    float theta;
    float magnifier;
    
    float maxSize;
    float minSize;
};
