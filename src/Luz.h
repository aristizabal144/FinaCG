#pragma once
#include "ofMain.h"
#include "ofxGui.h"
class Luz
{
private:
	ofxPanel panelLuz;
	ofParameter<ofVec3f> luzPosicion;
	ofLight luzPrincipal;
public:
	Luz();
	void setPosition();
	void draw();
};

