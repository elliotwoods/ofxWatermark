#pragma once

#include "ofImage.h"
#include "ofAppRunner.h"
#include "ofSystemUtils.h"
#include "ofGraphics.h"
#include "ofEvents.h"
#include <openssl/md5.h>

class ofxWatermark : public ofImage {
public:
	void init(string filename, string hash, bool autodraw = false, bool selfimmolation = false);
	void draw();
    void draw(ofEventArgs & args);
protected:
    ofVec2f scale;
    unsigned long long startTime;
};