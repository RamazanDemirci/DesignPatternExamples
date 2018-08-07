/*
 * StackIteratorCls.h
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#ifndef STACKITERATORCLS_H_
#define STACKITERATORCLS_H_

#include "StackCls.h"

class StackIteratorCls {
public:
	StackIteratorCls();
	virtual ~StackIteratorCls();
	StackIteratorCls(const StackCls* s);
	void first();
	void next();
	bool isDone();
	int currentItem();
private:
	// 1. Design an "iterator" class
	const StackCls *stk;
	int index;
};

#endif /* STACKITERATORCLS_H_ */
