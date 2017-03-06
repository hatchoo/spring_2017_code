#pragma once

#include "ofMain.h"
#include "units.hpp"

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
		
    ofVec2f calculateV1(vector<units> Units, int indec);
    ofVec2f calculateV2(vector<units> Units, int index);
    void calculateV3();
    
    float minDist;
    const int NUMUNITS = 100;
    vector<units> fly;
    float mapping;
    float distance;
    float c, noise;
    
};
