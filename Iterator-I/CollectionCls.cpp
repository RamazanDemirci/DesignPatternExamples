/*
 * CollectionCls.cpp
 *
 *  Created on: 26 Tem 2018
 *      Author: tr1d5042
 */

#include <utility>
#include "CollectionCls.h"
#include "IteratorCls.h"

CollectionCls::CollectionCls() {
	// TODO Auto-generated constructor stub
	printf("\n%s", __FUNCTION__);
}

CollectionCls::~CollectionCls() {
	// TODO Auto-generated destructor stub
	printf("\n%s", __FUNCTION__);
}

IteratorCls* CollectionCls::CreateIterator(){
	printf("\n%s", __FUNCTION__);
	return (new IteratorCls(this) );
}

int CollectionCls::getCount(){
	printf("\n%s", __FUNCTION__);
	return itemList.size();
}
