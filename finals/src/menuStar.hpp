//
//  menuStar.hpp
//  finals
//
//  Created by Jasmine Xie on 30/4/2017.
//
//

#pragma once
#include "ofMain.h"

class menuStar{
public:
    menuStar();
    void setup(float size);
    void update();
    void colour(int red, int green, int blue, int opacity);
    void illuminate();
    void movement(float speed, int degree);
    void glow(int opacity);
    void draw();
    
    float size;
    float universalSize;
    float angle;
    int x, y;
    
    int r, g, b, o;
    int distance;
};
