/*
 * CollectionCls.h
 *
 *  Created on: 26 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COLLECTIONCLS_H_
#define COLLECTIONCLS_H_

#include <vector>
#include "CollectionIfc.h"
class IteratorCls;

class CollectionCls : public CollectionIfc {
public:
	CollectionCls();
	virtual ~CollectionCls();
	IteratorCls* CreateIterator();
	int getCount();
	CollectionCls* operator[] (int index) const {
		return itemList.at(index);
	}
	CollectionCls* operator[] (int index) {
		return itemList.at(index);
	}
private:
	int count;
	std::vector<CollectionCls*> itemList;
};

#endif /* COLLECTIONCLS_H_ */
