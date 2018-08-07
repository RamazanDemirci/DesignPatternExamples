/*
 * IteratorIfc.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ITERATORIFC_H_
#define ITERATORIFC_H_


template <class TItemCls>
class IteratorIfc {
public:
	virtual void First() = 0;
	virtual void Next() = 0;
	virtual bool IsDone() const = 0;
	virtual TItemCls CurrentItem() const = 0;
};

#endif /* ITERATORIFC_H_ */
