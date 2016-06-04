#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetCircleResolution(100);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(0, 0, 0);
    ofSetColor(255, 255, 255, 255);
    
    for (int i = 0; i < 8; i++) {
        ofLine(1024/8 * i, 0, 1024/8 * i, 768);
    }
    for (int i = 0; i < 6; i++) {
        ofLine(0, 768/6 * i, 1024, 768/6 * i);
    }
    
//    ofEllipse(128, 384, 250, 700);
//    ofEllipse(384, 128, 250, 250);
//    ofTriangle(256, 512, 256, 768, 512, 768);
//    ofRect(512, 256, 256, 256);
    
    ofPushMatrix();
    
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate(45);
        ofRect(-150, -150, 300, 300);
        
    ofPopMatrix();
    ofRect(0, 0, 128, 128);
    
    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {
        case 'f':
            ofToggleFullscreen();
            break;
    }

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
