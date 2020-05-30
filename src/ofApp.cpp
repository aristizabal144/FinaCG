#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	principal.setup();
	principal.add(esferaBoton.setup("Sphere"));
	principal.add(boxBoton.setup("Box"));
	principal.add(conoBoton.setup("Cone"));
	principal.add(luzBoton.setup("Luz"));

}

//--------------------------------------------------------------
void ofApp::update()
{
	luz.setPosition();
	if (esferaBoton) {
		spheres.emplace_back(50);
	}

	if (boxBoton) {
		boxes.emplace_back(80,80,80);
	}

	if (conoBoton) {
		cones.emplace_back(50, 80);
	}

	if (luzBoton) {
		verLuz == false ? verLuz = true : verLuz = false;
		cout << verLuz;
		ofSleepMillis(200);
	}
}

//--------------------------------------------------------------
void ofApp::draw()
{

	if (verLuz) {
		luz.draw();
	}

	cam.begin();
	
	for (auto& s : spheres) {

		if (s.inside(ofGetMouseX(), ofGetMouseY()) && mouseIsPressed == true) {
			s.setPosition(ofGetMouseX(), ofGetMouseY(), zPosition);
		}

		s.draw();
	}

	for (auto& b : boxes) {

		if (b.inside(ofGetMouseX(), ofGetMouseY()) && mouseIsPressed == true) {
			b.setPosition(ofGetMouseX(), ofGetMouseY(), zPosition);
		}

		b.draw();
	}


	for (auto& c : cones) {
		if (c.inside(ofGetMouseX(), ofGetMouseY()) && mouseIsPressed == true) {
			c.setPosition(ofGetMouseX(), ofGetMouseY(), zPosition);
		}

		c.draw();
	}

	cam.end();

	principal.draw();
	shapesPosition.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	mouseIsPressed = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
	mouseIsPressed = false;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}