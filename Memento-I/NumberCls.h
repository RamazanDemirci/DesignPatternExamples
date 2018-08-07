/*
 * NumberCls.h
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef NUMBERCLS_H_
#define NUMBERCLS_H_

#include "MementoCls.h"

class NumberCls {
public:
	NumberCls();
	virtual ~NumberCls();
	NumberCls(int value);
	void dubble();
	void half();
	int getValue();
	MementoCls* createMemento();
	void reinstateMemento(MementoCls *mem);
private:
	int value;
};

#endif /* NUMBERCLS_H_ */
