#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    img.load("09.jpg");
    img.resize(ofGetWidth(), img.getHeight() * ofGetWidth() / img.getWidth());
    imgPixels = img.getPixels();
}

//--------------------------------------------------------------
void ofApp::update()
{
    // imgPixels = img.getPixels();
    // step = (step + 1) % sizeof(imgPixels);
    // ofPixel nextPixel = imgPixels[int(sizeof(imgPixels) / 2) + step];
    // nextPixel.setColor(imgPixels[int(sizeof(imgPixels) / 2)]).getColor();
    // ofLogNotice(imgPixels[int(sizeof(imgPixels) / 2)]);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    for (int x = 0; x < img.getWidth(); x+=1)
        for (int y = 0; y < img.getHeight(); y+=1)
        {
            ofColor color = img.getColor(x,y);
            ofSetColor(color);
            ofCircle(x,y,1);
        }

    ofSetColor(img.getColor(ofGetMouseX(), ofGetMouseY()));
    ofDrawCircle(100, 100, 50);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    switch (key)
    {
    case ' ':
        break;

    default:
        break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
    switch (key)
    {
    case 'f':
        ofToggleFullscreen();
        at_fullscreen = !at_fullscreen;

        if (at_fullscreen)
            img.resize(1920, img.getHeight() * 1920 / img.getWidth());
        else
            img.resize(1024, img.getHeight() * 1024 / img.getWidth());
        break;

    default:
        break;
    }
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}