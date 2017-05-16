//
//  menuStar.cpp
//  finals
//
//  Created by Jasmine Xie on 30/4/2017.
//
//

#include "menuStar.hpp"

menuStar::menuStar(){
    angle = 0;
    x = ofRandom(ofGetWindowHeight()+ofGetWindowHeight()*0.5);
    y = ofRandom(ofGetWindowHeight()+ofGetWindowHeight()*0.5);
    r = ofRandom(200,255);
    g = ofRandom(200,255);
    b = ofRandom(200,255);
};

void menuStar::setup(float size){
    universalSize = ofRandom(size);
}

void menuStar::update(){

};

void menuStar::colour(int red, int green, int blue, int opacity){
    r = red;
    g = green;
    b = blue;
    o = opacity;
    
    ofSetColor(red, green, blue, opacity);
};

void menuStar::glow(int opacity){
    ofSetColor(r,g,b,opacity/3);
    ofDrawEllipse(x, y, universalSize*10 ,universalSize*10);
    ofDrawEllipse(x, y, universalSize*5,universalSize*5);
    ofDrawEllipse(x, y, universalSize*7, universalSize*7);
};

void menuStar::movement(float speed, int degree){
    angle += speed;
    if(angle>360){
        angle = 0;
    }
    ofRotate(angle+degree);
};

void menuStar::draw(){
    ofDrawCircle(x, y, universalSize);
};
