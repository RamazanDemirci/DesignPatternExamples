/*
 * NutsToppingCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef NUTSTOPPINGCLS_H_
#define NUTSTOPPINGCLS_H_

#include "ToppingCls.h"

class NutsToppingCls : public ToppingCls {
public:
	NutsToppingCls();
	virtual ~NutsToppingCls();
	NutsToppingCls(ComponentIfc *input);
	/*virtual*/void addTopping();
};

#endif /* NUTSTOPPINGCLS_H_ */
