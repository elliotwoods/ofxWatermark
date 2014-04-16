# ofxWatermark

## Usage

### h

```cpp
#include "ofxWatermark.h"

class testApp : public ofApp {
	...

	ofxWatermark watermark;
}

testApp::draw() {
	...

	watermark.draw(); //draws in bottom right
	// or
	watermark.draw(10, 10); // watermark also inherits ofImage
}
```

### cpp

```cpp
testApp::setup() {
	...
	
	watermark.init("logo_white.png", "90c6b3efdead156592bf17985d0b6b58");

	...
}

testApp::draw() {
	...

	watermark.draw(); //draws in bottom right
	// or
	watermark.draw(10, 10); // watermark also inherits ofImage
}
```