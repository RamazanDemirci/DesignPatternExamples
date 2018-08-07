/*
 * StdVectorListIteratorCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef STDVECTORLISTITERATORCLS_H_
#define STDVECTORLISTITERATORCLS_H_

#include "StdVectorListCls.h"

template <class ItemTCls>
class StdVectorListIteratorCls : public IteratorIfc<ItemTCls> {
public:
	StdVectorListIteratorCls(const StdVectorListCls<ItemTCls> *list)
	: m_pList(list),
	  m_index(0)
	{
	}

	virtual ~StdVectorListIteratorCls()
	{
	}

	virtual void First()
	{
		m_index = 0;
	}

	virtual void Next()
	{
		m_index++;
	}

	virtual bool IsDone() const
	{
		return (m_pList->Count() <= m_index);
	}

	virtual ItemTCls CurrentItem() const
	{
		if(IsDone())
		{
			return ItemTCls();
		}

		return m_pList->Get(m_index);
	}

private:
	const StdVectorListCls<ItemTCls> * m_pList;

	unsigned int m_index;
};


#endif /* STDVECTORLISTITERATORCLS_H_ */
