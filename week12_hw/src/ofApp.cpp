#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    mySerial.setup("/dev/cu.usbmodem1421",9600);

    myByte = 0;
    myByte = mySerial.readByte();
    if ( myByte == OF_SERIAL_NO_DATA )
        printf("no data was read");
    else if ( myByte == OF_SERIAL_ERROR )
        printf("an error occurred");
    else
        printf("myByte is %d", myByte);

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofDrawCircle(ofGetWindowWidth()/2, ofGetWindowHeight()/2, 25);
    
    if(myByte <50){
        ofSetColor(200, 0, 0);
    }else if(myByte>50){
        ofSetColor(0, 0, 200);
    };
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
