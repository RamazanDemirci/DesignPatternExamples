/*
 * ChocolateIceCreamCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef CHOCOLATEICECREAMCLS_H_
#define CHOCOLATEICECREAMCLS_H_

#include "IceCreamIfc.h"

class ChocolateIceCreamCls : public IceCreamIfc {
public:
	ChocolateIceCreamCls();
	virtual ~ChocolateIceCreamCls();
	/*virtual*/ std::string functionality();
};

#endif /* CHOCOLATEICECREAMCLS_H_ */
