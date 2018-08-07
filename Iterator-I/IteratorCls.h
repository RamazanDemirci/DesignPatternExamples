/*
 * IteratorCls.h
 *
 *  Created on: 26 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ITERATORCLS_H_
#define ITERATORCLS_H_

#include "IteratorIfc.h"
#include "ItemCls.h"

#include "CollectionCls.h"

class IteratorCls : public IteratorIfc {
public:
	IteratorCls();
	virtual ~IteratorCls();
	IteratorCls(CollectionCls *collection);
	ItemCls* First();
	ItemCls* Next();
	int getStep();
	void setStep(int value);
	ItemCls* getCurrentItem();
	bool isDone();
private:
	CollectionCls *collection;
	int current;
	int step;
};

#endif /* ITERATORCLS_H_ */
