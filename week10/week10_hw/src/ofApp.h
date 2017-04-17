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
    
    ofSoundPlayer forest1;
    ofSoundPlayer forest2;
    ofSoundPlayer forest3;
    ofSoundPlayer forest4;
    ofSoundPlayer forest5;
    ofSoundPlayer forest6;
    ofSoundStream forestStream;
    
    ofSoundPlayer forestSoundsLoad[6];
    ofSoundPlayer forestSoundsPlay[6];
    //string soundNames[6];
    
    ofEasyCam cam;

    int width;
    int height;
    int depth;
    int spacing;
    
    int numRows;
    int numCols;
    int sizeOfGrid;
    
    ofBoxPrimitive box[100];
    
    ofLight pointLight;
    ofMaterial myMaterial;
    
		
};
