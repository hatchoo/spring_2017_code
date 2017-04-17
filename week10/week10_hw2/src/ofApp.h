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
    
    ofEasyCam cam;
    int width;
    int height;
    int depth;
    int spacing;
    
    int numRows;
    int numCols;
    int sizeOfGrid;
    int r, g, b, o;
    
    ofSoundPlayer water;
    ofBoxPrimitive box[100];
    ofLight pointLight;
    ofMaterial myMaterial;
};
