/*
 * StackCls.h
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#ifndef STACKCLS_H_
#define STACKCLS_H_

class StackIteratorCls;

class StackCls {
public:
	StackCls();
	virtual ~StackCls();
	friend class StackIter;
	void push(int in);
	int pop();
	bool isEmpty();
	StackIteratorCls *createIterator() const; // 2. Add a createIterator() member
	int items[10];
	int sp;
};

#endif /* STACKCLS_H_ */
