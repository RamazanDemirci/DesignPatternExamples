/*
 * main.cpp
 *
 *  Created on: 2 Aðu 2018
 *      Author: tr1d5042
 */

#include "FactoryIfc.h"
#include "CircleCls.h"
#include "SquareCls.h"
#include "EllipseCls.h"
#include "RectangleCls.h"
#include "SimpleShapeFactoryCls.h"
#include "RobustShapeFactoryCls.h"

#define SIMPLE

int main() {
#ifdef SIMPLE
  FactoryIfc *factory = new SimpleShapeFactoryCls;
#elif ROBUST
  FactoryIfc *factory = new RobustShapeFactoryCls;
#endif
	ShapeCls* shapes[3];

	shapes[0] = factory->createCurvedInstance();   // shapes[0] = new Ellipse;
	shapes[1] = factory->createStraightInstance(); // shapes[1] = new Rectangle;
	shapes[2] = factory->createCurvedInstance();   // shapes[2] = new Ellipse;

	for (int i=0; i < 3; i++) {
		shapes[i]->draw();
	}
}

