/*
 * ToppingCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef TOPPINGCLS_H_
#define TOPPINGCLS_H_

#include "ComponentIfc.h"

class ToppingCls : public ComponentIfc {
public:
	ToppingCls();
	virtual ~ToppingCls();
	ToppingCls(ComponentIfc *input);
	/*virtual*/ void addTopping();
protected:
	ComponentIfc *input;
};

#endif /* TOPPINGCLS_H_ */
