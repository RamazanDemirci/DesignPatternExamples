/*
 * RobustShapeFactoryCls.cpp
 *
 *  Created on: 2 Aðu 2018
 *      Author: tr1d5042
 */

#include "EllipseCls.h"
#include "RectangleCls.h"
#include "RobustShapeFactoryCls.h"

RobustShapeFactoryCls::RobustShapeFactoryCls() {
	// TODO Auto-generated constructor stub

}

RobustShapeFactoryCls::~RobustShapeFactoryCls() {
	// TODO Auto-generated destructor stub
}

ShapeCls* RobustShapeFactoryCls::createCurvedInstance()   {
	return new EllipseCls;
}
ShapeCls* RobustShapeFactoryCls::createStraightInstance() {
	return new RectangleCls;
}

