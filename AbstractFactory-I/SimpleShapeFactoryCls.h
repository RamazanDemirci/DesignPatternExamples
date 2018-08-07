/*
 * SimpleShapeFactoryCls.h
 *
 *  Created on: 2 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef SIMPLESHAPEFACTORYCLS_H_
#define SIMPLESHAPEFACTORYCLS_H_

#include "FactoryIfc.h"

class SimpleShapeFactoryCls: public FactoryIfc {
public:
	SimpleShapeFactoryCls();
	virtual ~SimpleShapeFactoryCls();
	ShapeCls* createCurvedInstance();
	ShapeCls* createStraightInstance();
};

#endif /* SIMPLESHAPEFACTORYCLS_H_ */
