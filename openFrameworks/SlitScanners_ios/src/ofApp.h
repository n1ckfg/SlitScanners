#pragma once

#include "ofxiOS.h"
#include "ofxGui.h"

#include "Dot.h"
#include "Scanner.h"

class ofApp : public ofxiOSApp {

	public:
		void setup();
		void update();
		void draw();
		
		ofImage wave(ofImage sourceImg);

		ofImage image1;
		ofImage image2;
		ofxPanel gui;
		ofxFloatSlider wavelength, amplitude, noiseScale, distortion, ySpeed;

};
