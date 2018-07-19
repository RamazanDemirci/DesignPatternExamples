/*
 * NegativeProcessorCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef NEGATIVEPROCESSORCLS_H_
#define NEGATIVEPROCESSORCLS_H_

#include "ChainIfc.h"
#include "NumberCls.h"

class NegativeProcessorCls : public ChainIfc {
public:
	NegativeProcessorCls();
	virtual ~NegativeProcessorCls();
	void setNext(ChainIfc *chain);
	void process(NumberCls *number);
private:
	ChainIfc *nextInChain;
};

#endif /* NEGATIVEPROCESSORCLS_H_ */
