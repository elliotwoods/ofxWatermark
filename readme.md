# ofxWatermark

## Introduction

Add a watermark to your application which cannot be changed after you build the app. If the image file is changed, the app will fail to run (give a system alert and quit).

## License

[MIT license](http://opensource.org/licenses/MIT), no warranty


## Usage

### Get the hash

In terminal, navigate to the image which you want to find the hash for, and do the following:

```bash
% md5 ./logo_white.png 
MD5 (./logo_white.png) = 90c6b3efdead156592bf17985d0b6b58
```
This hash is 128 bits long. It is extermely difficult for somebody to replace the watermark image with a different image, whilst keeping the hash the same. This means that our program can simply check to make sure that the image which it is loading has the same hash as the one hardcoded into the program.

### Code

In your cpp file: 

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


In your h file:

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

### Other notes

If you're on osx, you probably want to copy the image into your app package, and change your data folder to match, e.g.:

add this to your 'Run script' in Target>Build Phases

```
cp -r ./bin/data/*.png "$TARGET_BUILD_DIR/$PRODUCT_NAME.app/Contents/Resources"
```

and add this to the top of your setup function:

```cpp
	ofSetDataPathRoot("../Resources/");
```
