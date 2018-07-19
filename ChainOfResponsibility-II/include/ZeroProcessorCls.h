/*
 * ZeroProcessorCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ZEROPROCESSORCLS_H_
#define ZEROPROCESSORCLS_H_

#include "ChainIfc.h"
#include "NumberCls.h"

class ZeroProcessorCls : public ChainIfc {
public:
	ZeroProcessorCls();
	virtual ~ZeroProcessorCls();
	void setNext(ChainIfc *chain);
	void process(NumberCls *number);
private:
	ChainIfc *nextInChain;
};

#endif /* ZEROPROCESSORCLS_H_ */
