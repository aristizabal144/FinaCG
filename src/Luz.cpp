#include "Luz.h"

Luz::Luz() {
	panelLuz.setup();
	panelLuz.setPosition(800,10);
	panelLuz.add(luzPosicion.set("Posicion Luz", ofVec3f(0, 0, 0), ofVec3f(-300, -300, -300), ofVec3f(300, 300, 300)));
	luzPrincipal.setPosition(0, 0, 0);
	luzPrincipal.enable();
}

void Luz::setPosition() {
	luzPrincipal.setPosition(this->luzPosicion->x, this->luzPosicion->y, this->luzPosicion->z);
}

void Luz::draw() {
	panelLuz.draw();
}
