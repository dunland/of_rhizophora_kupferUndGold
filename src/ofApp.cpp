#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetFrameRate(30);

    // setup gui:
    gui.setup();
    gui.add(zoom_y_speed.set("zoom y", 0, -100, 100));
    gui.add(zoom_x_speed.set("zoom x", 0, -100, 100));

    // load image:
    img.load("09.jpg");
    // img.resize(ofGetWidth(), img.getHeight() * ofGetWidth() / img.getWidth());
    imgPixels = img.getPixels();
}

//--------------------------------------------------------------
void ofApp::update()
{
    imgPixels = img.getPixels();
    // step = (step + 1) % sizeof(imgPixels);
    // ofPixel nextPixel = imgPixels[int(sizeof(imgPixels) / 2) + step];
    // nextPixel.setColor(imgPixels[int(sizeof(imgPixels) / 2)]).getColor();
    // ofLogNotice(imgPixels[int(sizeof(imgPixels) / 2)]);
    image_x_position = (image_x_position + zoom_x_speed) % int(img.getWidth()) - CANVAS_HEIGHT;
    image_y_position = (image_y_position + zoom_y_speed) % int(img.getHeight() - CANVAS_WIDTH);
}

//--------------------------------------------------------------
void ofApp::draw()
{
    // --------------------- points-based ----------------------
    // for (int x = image_x_position; x < image_x_position + CANVAS_WIDTH; x+=1)
    //     for (int y = image_y_position; y < image_y_position + CANVAS_HEIGHT; y+=1)
    //     {
    //         // slow:
    //         // ofColor color = img.getColor(x,y);
    //         ofColor color = imgPixels.getColor(x,y);
    //         ofSetColor(color);
    //         ofDrawCircle(x,y,1);
    //         ofPoint(x,y);
    //     }

    // ofSetColor(imgPixels.getColor(ofGetMouseX(), ofGetMouseY()));
    // ofDrawCircle(100, 100, 50);

    // ----------------------- simple pan ----------------------
    img.draw(image_x_position, image_y_position);

    if (bShowGui) gui.draw();
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

        // if (at_fullscreen)
        //     img.resize(1920, img.getHeight() * 1920 / img.getWidth());
        // else
        //     img.resize(1024, img.getHeight() * 1024 / img.getWidth());
        break;

    case 'g':
        bShowGui = !bShowGui;
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