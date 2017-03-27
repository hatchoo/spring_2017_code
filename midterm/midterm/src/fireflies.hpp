//
//  fireflies.hpp
//  midterm
//
//  Created by Jasmine Xie on 20/3/2017.
//
//

#pragma once
#include "ofMain.h"

class fireflies{
public:
    
    fireflies();
    void update();
    void glow(int r, int g, int b, int opacity);
    void circulate();
    void colour(int r, int g, int b, int opacity);
    void draw();
    
    float time, width, height, speed;
    float theta;
    
    float x, y, z;
    int size, maxX, maxY, randomSpeed,denominator;
    int red, green, blue, opa;
    
};
