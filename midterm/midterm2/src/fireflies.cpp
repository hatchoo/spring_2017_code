//
//  fireflies.cpp
//  midterm
//
//  Created by Jasmine Xie on 20/3/2017.
//
//

#include "fireflies.hpp"

fireflies::fireflies(){
    
    size = ofRandom(5,10);
    width = ofGetWindowWidth();
    height = ofGetWindowHeight();
    speed = 0.1;
    time = ofGetElapsedTimef();
    
    maxY = ofRandom(0,ofGetWindowHeight()+200);
    maxX = ofRandom(0,ofGetWindowWidth()+200);
    
    randomSpeed = ofRandom(0.0001,0.001);
    denominator = ofRandom(1,10);
    
};

void fireflies::update(){
    
    theta += 0.001*ofRandom(1,15);
    
    x = ofMap(ofNoise(theta/denominator, -10), 0, 1, 0, maxX)+100;
    y = ofMap(ofNoise(theta/denominator, 10), 0, 1, 0, maxY)+50;
    z = ofMap(ofNoise(theta/denominator, 10),0,1,-500,250);
    
    //cout << theta;
    
};

void fireflies::colour(int r, int g, int b, int opacity){
    opa = opacity;
    red = r;
    green = g;
    blue = b;
}

void fireflies::glow(int r, int g, int b, int opacity){
    
    for(float i=0.2; i<1.2; i+=0.2){
        ofSetColor(r, g, b, opacity/25);
        ofDrawEllipse(x, y, z, size*(3+i),size*(3+i));
    }
    
    ofSetColor(r,g,b,opacity);
    ofDrawEllipse(x, y, z, size*1.1,size*1.1);
    ofSetColor(r,g,b,opacity/2);
    ofDrawEllipse(x, y, z, size*2,size*2);
    ofDrawEllipse(x, y, z, size*1.5, size*1.5);
    
};

void fireflies::circulate(){
    
};

void fireflies::draw(){
    ofSetColor(red, green, blue);
    ofDrawEllipse(x,y,z,size,size);
    glow(red, green, blue, opa);
};
