/*
 * PlainIceCreamCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef PLAINICECREAMCLS_H_
#define PLAINICECREAMCLS_H_

#include "ComponentIfc.h"

class PlainIceCreamCls : public ComponentIfc {
public:
	PlainIceCreamCls();
	virtual ~PlainIceCreamCls();
	/*virtual*/ void addTopping();
};

#endif /* PLAINICECREAMCLS_H_ */
