/*
 * main.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include "ShoppingCartCls.h"
#include "ItemCls.h"
#include "PaypalStrategyCls.h"
#include "CreditCardStrategyCls.h"

int main(){
	ShoppingCartCls *cart = new ShoppingCartCls();

	ItemCls *item1 = new ItemCls("1453Friday", 13);
	ItemCls *item2 = new ItemCls("1990April", 18);

	cart->addItem(item1);
	cart->addItem(item2);

	//pay by paypal
	PaymentStrategyIfc *payment1 = new PaypalStrategyCls("mohamed.ali@gmail.com", "mypwd");
	cart->pay(payment1);

	//pay by credit card
	PaymentStrategyIfc *payment2 = new CreditCardStrategyCls("Mike Tyson","TR19352465125614575896", "299", "08/19");
	cart->pay(payment2);
}

