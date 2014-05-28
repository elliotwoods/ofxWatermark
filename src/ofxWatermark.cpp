#include "ofxWatermark.h"

string hashToString(unsigned char * hash) {
	stringstream ss;
	ss << std::hex << std::setfill('0');
	for(int i=0; i<MD5_DIGEST_LENGTH; i++) {
		ss << std::setw(2) << int(hash[i]);
	}
	return ss.str();
}
//----------
void ofxWatermark::init(string filename, string hash, bool autodraw, bool selfDestruct) {
	ofFile file(filename);
	auto buffer = file.readToBuffer();
	
	unsigned char fileHash[MD5_DIGEST_LENGTH];
	MD5((unsigned char *)buffer.getBinaryBuffer(), buffer.size(), fileHash);

	if (hashToString(fileHash) != hash) {
		ofSystemAlertDialog("The watermark hash does not match. Tamper alert! Quitting!");
		ofExit();
	}

	this->loadImage(buffer);
    
    if(autodraw){
        ofAddListener(ofEvents().draw, this, &ofxWatermark::draw);
    }
    
    if(selfDestruct){
        ofFile::removeFile(ofToDataPath(filename));
    }
}

//----------
void ofxWatermark::draw() {
	ofImage::draw(ofGetWidth() - this->getWidth() - 10, ofGetHeight() - this->getHeight() - 10);
}

void ofxWatermark::draw(ofEventArgs& args) {

    ofPushView();
    ofViewport(0, 0, ofGetWidth(), ofGetHeight());
    ofPushStyle();
    ofEnableAlphaBlending();
    ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
    ofSetColor(255, 255, 255, 45);
    if(ofGetElapsedTimeMillis() - startTime > 600000){
        ofEnableBlendMode(OF_BLENDMODE_ADD);
        ofSetColor( abs(sin(ofGetElapsedTimef()*0.1234))*255,  abs(sin(ofGetElapsedTimef()*0.5))*255,  abs(sin(ofGetElapsedTimef()*0.2234))*255, abs(sin(ofGetElapsedTimef()*0.2234))*255);
    }
	ofImage::draw(ofGetWidth()/2 - (this->getWidth()*2)/2, ofGetHeight()/2 - (this->getHeight()*2)/2, this->getWidth()*2, this->getHeight()*2);
    ofDisableAlphaBlending();
    ofPopStyle();
    ofPopView();
}
