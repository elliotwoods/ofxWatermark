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
void ofxWatermark::init(string filename, string hash) {
	ofFile file(filename);
	auto buffer = file.readToBuffer();
	
	unsigned char fileHash[MD5_DIGEST_LENGTH];
	MD5((unsigned char *)buffer.getBinaryBuffer(), buffer.size(), fileHash);

	if (hashToString(fileHash) != hash) {
		ofSystemAlertDialog("The watermark hash does not match. Tamper alert! Quitting!");
		ofExit();
	}

	this->loadImage(buffer);
}

//----------
void ofxWatermark::draw() {
	ofImage::draw(ofGetWidth() - this->getWidth() - 10, ofGetHeight() - this->getHeight() - 10);
}