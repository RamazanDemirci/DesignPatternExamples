/*
 * PeanutToppingCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef PEANUTTOPPINGCLS_H_
#define PEANUTTOPPINGCLS_H_

#include "ToppingCls.h"

class PeanutToppingCls : public ToppingCls{
	using ToppingCls::ToppingCls;
public:
	PeanutToppingCls();
	virtual ~PeanutToppingCls();
	PeanutToppingCls(ComponentIfc *input);
	/*virtual*/void addTopping();
};

#endif /* PEANUTTOPPINGCLS_H_ */
