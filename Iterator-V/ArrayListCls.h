/*
 * ArrayListCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ARRAYLISTCLS_H_
#define ARRAYLISTCLS_H_

#include "ListIfc.h"
#include "IteratorIfc.h"

#define MAXSIZEARRAY 60;

template<class ItemTCls>
class ArrayListCls: public ListIfc<ItemTCls> {
public:
	ArrayListCls() :
			m_currentSize(0) {

	}
	virtual ~ArrayListCls() {

	}
	virtual IteratorIfc<ItemTCls> * CreateIterator() const {
		return new ArrayListIterator<ItemTCls>(this);
	}
	virtual unsigned int Count() const {
		return m_currentSize;
	}
	virtual void Append(ItemTCls item) {
		if (m_currentSize < MAXSIZEARRAY) {
			m_array[m_currentSize] = item;
			m_currentSize++;
		}
	}
	virtual const ItemTCls& Get(unsigned int index) const {
		return m_array[index];
	}
private:
	ItemTCls m_array[MAXSIZEARRAY];
	unsigned int m_currentSize;
};

#endif /* ARRAYLISTCLS_H_ */
