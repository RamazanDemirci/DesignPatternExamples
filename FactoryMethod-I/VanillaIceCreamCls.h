/*
 * VanillaIceCreamCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef VANILLAICECREAMCLS_H_
#define VANILLAICECREAMCLS_H_

#include "IceCreamIfc.h"

class VanillaIceCreamCls : public IceCreamIfc {
public:
	VanillaIceCreamCls();
	virtual ~VanillaIceCreamCls();
	/*virtual*/ std::string functionality();

};

#endif /* VANILLAICECREAMCLS_H_ */
