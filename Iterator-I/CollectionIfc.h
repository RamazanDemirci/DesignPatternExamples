/*
 * CollectionIfc.h
 *
 *  Created on: 26 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COLLECTIONIFC_H_
#define COLLECTIONIFC_H_

class IteratorCls;

class CollectionIfc {
public:
	IteratorCls* CreateIterator();
};


#endif /* COLLECTIONIFC_H_ */
