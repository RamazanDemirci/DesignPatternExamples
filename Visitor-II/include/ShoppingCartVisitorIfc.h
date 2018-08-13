/*
 * ShoppingCartVisitorIfc.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SHOPPINGCARTVISITORIFC_H_
#define SHOPPINGCARTVISITORIFC_H_

class BookCls;
class FruitCls;


class ShoppingCartVisitorIfc {
public:
	virtual float visit(BookCls *book) = 0;
	virtual float visit(FruitCls *fruit) = 0;
};


#endif /* SHOPPINGCARTVISITORIFC_H_ */
