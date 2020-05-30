#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxGui.h"
#include "../CustomSphere.h"
#include "../CustomBox.h"
#include "../CustomCone.h"
#include "../Luz.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();


	ofxPanel principal;
	ofxPanel shapesPosition;
	ofParameter<ofVec3f> shapePosition;


	Luz luz;

	ofxButton esferaBoton;
	ofxButton boxBoton;
	ofxButton conoBoton;
	ofxButton luzBoton;
	bool verLuz = false;

	ofEasyCam cam;
	ofSpherePrimitive sphere;
	bool mouseIsPressed = false;
	int zPosition = 0;

	std::list<CustomSphere> spheres;
	std::list<CustomBox> boxes;
	std::list<CustomCone> cones;
	bool rotateSpheres = false;

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

};

