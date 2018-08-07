/*
 * ArrayListIteratorCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ARRAYLISTITERATORCLS_H_
#define ARRAYLISTITERATORCLS_H_

#include "IteratorIfc.h"

template<class ItemTCls>
class ArrayListIteratorCls : public IteratorIfc<ItemTCls> {
public:
	ArrayListIteratorCls(const ArrayListCls<ItemTCls> * list) :
			m_pList(list), m_index(0) {
	}
	virtual ~ArrayListIteratorCls() {
	}
	virtual void First() {
		m_index = 0;
	}
	virtual void Next() {
		m_index++;
	}
	virtual bool IsDone() const {
		return (m_pList->Count() <= m_index);
	}
	virtual ItemTCls CurrentItem() const {
		if (IsDone()) {
			return ItemTCls();
		}

		return m_pList->Get(m_index);
	}
private:
	const ArrayListCls<ItemTCls> * m_pList;
	unsigned int m_index;
};

#endif /* ARRAYLISTITERATORCLS_H_ */
