/*
 * StdVectorListCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef STDVECTORLISTCLS_H_
#define STDVECTORLISTCLS_H_

#include <vector>
#include "ListIfc.h"
#include "StdVectorListIteratorCls.h"

template<class ItemTCls>
class StdVectorListCls : public ListIfc<ItemTCls> {
public:
	StdVectorListCls() {

	}
	virtual ~StdVectorListCls() {

	}
	virtual IteratorIfc<ItemTCls> * CreateIterator() const {
		return new StdVectorListIteratorCls<ItemTCls>(this);
	}
	virtual unsigned int Count() const {
		return m_vector.size();
	}
	virtual void Append(ItemTCls item) {
		m_vector.push_back(item);
	}
	virtual const ItemTCls& Get(unsigned int index) const {
		return m_vector.at(index);
	}
private:
	std::vector<ItemTCls> m_vector;
};

#endif /* STDVECTORLISTCLS_H_ */
