/*
 * JTPoormanCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef INCLUDE_JTPOORMANCLS_H_
#define INCLUDE_JTPOORMANCLS_H_

#include "ColleagueCls.h"

class JTPoormanCls : public ColleagueCls{
public:
	JTPoormanCls();
	JTPoormanCls(MediatorIfc *mediator);
	virtual ~JTPoormanCls();
};

#endif /* INCLUDE_JTPOORMANCLS_H_ */
