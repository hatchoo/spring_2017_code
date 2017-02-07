#pragma once

#include "ofMain.h"

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
    
    ofVec2f position;
    ofVec2f velocity;
    ofVec2f acceleration;
    ofVec2f mousePos;
    
    ofVec2f position2, velocity2, acceleration2;
    ofVec2f position3, velocity3, acceleration3;
    ofVec2f position4, velocity4, acceleration4;
    ofVec2f position5, velocity5, acceleration5;
    
    float size;
    float time;
    float friction, friction2, friction3, friction4, friction5;
		
};
