/*
 * IteratorCls.cpp
 *
 *  Created on: 26 Tem 2018
 *      Author: tr1d5042
 */

#include "IteratorCls.h"
#include "CollectionCls.h"

IteratorCls::IteratorCls() : current(0), step(1){
	// TODO Auto-generated constructor stub
	printf("\n%s", __FUNCTION__);
}

IteratorCls::~IteratorCls() {
	// TODO Auto-generated destructor stub
	printf("\n%s", __FUNCTION__);
}

IteratorCls::IteratorCls(CollectionCls *collection) {
	printf("\n%s", __FUNCTION__);
	this->collection = collection;
	this->current = 0;
	this->step = 1;
}

ItemCls* IteratorCls::First(){
	printf("\n%s", __FUNCTION__);
	this->current = 0;
	return getCurrentItem();
}

ItemCls* IteratorCls::Next(){
	printf("\n%s", __FUNCTION__);
	this->current += this->step;
	return getCurrentItem();
}

int IteratorCls::getStep(){
	printf("\n%s", __FUNCTION__);
	return this->step;
}

void IteratorCls::setStep(int value){
	printf("\n%s", __FUNCTION__);
	this->step = value;
}

ItemCls* IteratorCls::getCurrentItem(){
	printf("\n%s", __FUNCTION__);
	return (ItemCls*)(&(this->collection[current]));
}

bool IteratorCls::isDone(){
	printf("\n%s", __FUNCTION__);
	return (this->current >= this->collection->getCount());
}

