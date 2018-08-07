/*
 * CandyToppingCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef CANDYTOPPINGCLS_H_
#define CANDYTOPPINGCLS_H_

#include "ToppingCls.h"

class CandyToppingCls : public ToppingCls{
	using ToppingCls::ToppingCls;
public:
	CandyToppingCls();
	virtual ~CandyToppingCls();
	CandyToppingCls(ComponentIfc *input);
	/*virtual*/void addTopping();
};

#endif /* CANDYTOPPINGCLS_H_ */
