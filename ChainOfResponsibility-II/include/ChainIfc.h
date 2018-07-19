/*
 * ChainIfc.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef INCLUDE_CHAINIFC_H_
#define INCLUDE_CHAINIFC_H_

class NumberCls;

class ChainIfc {
public:
	virtual void setNext(ChainIfc *nextInChain) = 0;
	virtual void process(NumberCls *request) = 0;
};


#endif /* INCLUDE_CHAINIFC_H_ */
