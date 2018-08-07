/*
 * StrawberryIceCreamCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef STRAWBERRYICECREAMCLS_H_
#define STRAWBERRYICECREAMCLS_H_

#include "IceCreamIfc.h"

class StrawberryIceCreamCls : public IceCreamIfc {
public:
	StrawberryIceCreamCls();
	virtual ~StrawberryIceCreamCls();
	/*virtual*/ std::string functionality();
};

#endif /* STRAWBERRYICECREAMCLS_H_ */
