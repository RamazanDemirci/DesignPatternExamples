/*
 * ShoppingCartClientCls.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SHOPPINGCARTCLIENTCLS_H_
#define SHOPPINGCARTCLIENTCLS_H_

#include "ShoppingCartVisitorIfc.h"
#include "BookCls.h"
#include "FruitCls.h"

class ShoppingCartClientCls : public ShoppingCartVisitorIfc {
public:
	ShoppingCartClientCls();
	virtual ~ShoppingCartClientCls();
	int visit(BookCls *book);
	int visit(FruitCls *fruit);
};

#endif /* SHOPPINGCARTCLIENTCLS_H_ */
