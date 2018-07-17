/*
 * ShoppingCartCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SHOPPINGCARTCLS_H_
#define SHOPPINGCARTCLS_H_

#include <vector>
#include "ItemCls.h"
#include "PaymentStrategyIfc.h"

class ShoppingCartCls {
public:
	ShoppingCartCls();
	virtual ~ShoppingCartCls();
	void addItem(ItemCls *item);
	void removeItem(ItemCls *item);
	int calculateTotal();
	void pay(PaymentStrategyIfc *paymentMethod);
private:
	std::vector<ItemCls*> itemList;
};

#endif /* SHOPPINGCARTCLS_H_ */
