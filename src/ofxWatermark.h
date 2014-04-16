#pragma once

#include "ofImage.h"
#include "ofAppRunner.h"
#include "ofSystemUtils.h"
#include <openssl/md5.h>

class ofxWatermark : public ofImage {
public:
	void init(string filename, string hash);
	void draw();
};