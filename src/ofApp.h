#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "ofxGui.h"
#include "settings.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		ofImage img;
		ofPixels imgPixels;

		int image_x_position = 0;
		int image_y_position = 0;
		bool at_fullscreen = false;

		ofxOscReceiver receiver;

		ofxPanel gui;
		ofParameter<int> zoom_y_speed = 0;
		ofParameter<int> zoom_x_speed = 0;
		bool bShowGui = true;
};
