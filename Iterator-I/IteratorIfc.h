/*
 * IteratorIfc.h
 *
 *  Created on: 26 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ITERATORIFC_H_
#define ITERATORIFC_H_

class ItemCls;

class IteratorIfc {
public:
	virtual ItemCls* First() = 0;
	virtual ItemCls* Next() = 0;
	virtual bool isDone() = 0;
	virtual ItemCls* getCurrentItem() = 0;
};


#endif /* ITERATORIFC_H_ */
