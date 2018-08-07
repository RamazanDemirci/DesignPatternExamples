/*
 * RobustShapeFactoryCls.h
 *
 *  Created on: 2 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef ROBUSTSHAPEFACTORYCLS_H_
#define ROBUSTSHAPEFACTORYCLS_H_

#include "FactoryIfc.h"

class RobustShapeFactoryCls : public FactoryIfc {
public:
	RobustShapeFactoryCls();
	virtual ~RobustShapeFactoryCls();
	ShapeCls* createCurvedInstance();
	ShapeCls* createStraightInstance();
};

#endif /* ROBUSTSHAPEFACTORYCLS_H_ */
