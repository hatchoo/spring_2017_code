#pragma once
#define NUM 300

#include "ofMain.h"
#include "menuStar.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    
    int currentScreen;
    
    int r[NUM];
    int g[NUM];
    int b[NUM];
    int opacity[NUM];
    int oscilation[NUM];
    
    int distance;
    
    int mouseX;
    int mouseY;
    
    menuStar stars[NUM];
    menuStar stars2[NUM];
    menuStar stars3[NUM];
    menuStar stars4[NUM];
    menuStar stars5[NUM];
    
    ofSoundPlayer starrysky;
    
    vector<ofVec2f> linePosition;
};
