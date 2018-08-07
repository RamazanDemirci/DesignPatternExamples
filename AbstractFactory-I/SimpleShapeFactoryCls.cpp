/*
 * SimpleShapeFactoryCls.cpp
 *
 *  Created on: 2 Aðu 2018
 *      Author: tr1d5042
 */

#include "CircleCls.h"
#include "SquareCls.h"
#include "SimpleShapeFactoryCls.h"

SimpleShapeFactoryCls::SimpleShapeFactoryCls() {
	// TODO Auto-generated constructor stub

}

SimpleShapeFactoryCls::~SimpleShapeFactoryCls() {
	// TODO Auto-generated destructor stub
}

ShapeCls* SimpleShapeFactoryCls::createCurvedInstance() {
	return new CircleCls;
}
ShapeCls* SimpleShapeFactoryCls::createStraightInstance() {
	return new SquareCls;
}
