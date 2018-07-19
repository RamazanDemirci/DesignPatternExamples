/*
 * PositiveProcessorCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef POSITIVEPROCESSORCLS_H_
#define POSITIVEPROCESSORCLS_H_

#include "ChainIfc.h"
#include "NumberCls.h"

class PositiveProcessorCls : public ChainIfc {
public:
	PositiveProcessorCls();
	virtual ~PositiveProcessorCls();
	void setNext(ChainIfc *chain);
	void process(NumberCls *number);
private:
	ChainIfc *nextInChain;
};

#endif /* POSITIVEPROCESSORCLS_H_ */
