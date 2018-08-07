/*
 * FactoryIfc.h
 *
 *  Created on: 2 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef FACTORYIFC_H_
#define FACTORYIFC_H_

#include "ShapeCls.h"

class FactoryIfc{
public:
	virtual ShapeCls* createCurvedInstance() = 0;
	virtual ShapeCls* createStraightInstance() = 0;
};



#endif /* FACTORYIFC_H_ */
