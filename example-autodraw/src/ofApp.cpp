#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
#if defined(OF_TARGET_OSX)
    ofSetDataPathRoot("../Resources/");
#endif
    watermark.init("fakelove_640.png", "e20ad30e46d45140cd459224eca59fcc", true);
    ofSetCircleResolution(60);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    ofEnableAlphaBlending();
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    ofSetColor(255, 0, 255, 75);
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, ofMap(sin(ofGetElapsedTimef()*0.1234), -1, 1, 10, ofGetWidth()>ofGetHeight()?ofGetHeight()/2:ofGetWidth()/2));
    ofSetColor(255, 0, 0, 75);
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, ofMap(sin(ofGetElapsedTimef()*0.2468), -1, 1, 10, ofGetWidth()>ofGetHeight()?ofGetHeight()/2:ofGetWidth()/2));
    ofSetColor(0, 0, 255, 75);
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, ofMap(sin(ofGetElapsedTimef()*0.2341), -1, 1, 10, ofGetWidth()>ofGetHeight()?ofGetHeight()/2:ofGetWidth()/2));
    ofSetColor(0, 255, 255, 75);
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, ofMap(sin(ofGetElapsedTimef()*0.6543), -1, 1, 10, ofGetWidth()>ofGetHeight()?ofGetHeight()/2:ofGetWidth()/2));
    ofDisableAlphaBlending();
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
