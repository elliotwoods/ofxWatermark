#include "ofApp.h"
//add this to your 'Run script' in Target>Build Phases
//cp -r ./bin/data/*.png "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Resources"
//--------------------------------------------------------------
void ofApp::setup(){
    //add this to your 'Run script' in Target>Build Phases
    //cp -r ./bin/data/*.png "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Resources"
//    ofSetDataPathRoot("../Resources/");
    watermark.init("logo.png", "7266b84987016ad01535b3962901a521");
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
     watermark.draw();
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
