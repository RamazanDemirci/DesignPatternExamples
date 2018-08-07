/*
 * ListTCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LISTIFC_H_
#define LISTIFC_H_

#include "IteratorIfc.h"

template<class TItemCls>
class ListIfc {
public:
	virtual IteratorIfc<TItemCls> * CreateIterator() const	= 0;
	virtual unsigned int Count() const						= 0;
	virtual void Append(TItemCls item)						= 0;
};


#endif /* LISTIFC_H_ */
