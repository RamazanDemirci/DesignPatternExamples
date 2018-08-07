/*
 * ProductIteratorIfc.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PRODUCTITERATORIFC_H_
#define PRODUCTITERATORIFC_H_

class ProductCls;

class ProductIteratorIfc{
	ProductCls *First();
	ProductCls *MoveNext();
	bool IsContinue();
	ProductCls *Current();
};

#endif /* PRODUCTITERATORIFC_H_ */
