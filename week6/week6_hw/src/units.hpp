//
//  units.hpp
//  week6_hw
//
//  Created by Jasmine Xie on 5/3/2017.
//
//

#pragma once
#include "ofMain.h"

class units{
public:
    units();
    void update();
    void draw();
    void move(float inhibitor);
    
    ofVec2f pos, vel;
    ofVec2f v1, v2, v3;
    
    int size = ofRandom(2,10);
};

