//
//  Strokes.hpp
//  week5_hw3
//
//  Created by Jasmine Xie on 26/2/2017.
//
//

#pragma once
#include "ofMain.h"

class Strokes{
public:
    Strokes();
    void update();
    void draw();
    
    float x,y;
    float theta, orbitRadius;
    int size;
};
