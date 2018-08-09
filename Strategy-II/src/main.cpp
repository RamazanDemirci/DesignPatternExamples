/*
 * main.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include <iostream>
#include "ShoppingCartCls.h"
#include "ItemCls.h"
#include "PaypalStrategyCls.h"
#include "CreditCardStrategyCls.h"

using namespace std;

int main(){
	ShoppingCartCls *cart = new ShoppingCartCls();
	cart->setCurrency("USD");

	ItemCls *item1 = new ItemCls("1453Friday", 13, "USD");
	ItemCls *item2 = new ItemCls("1990April", 18, "USD");

	cart->addItem(item1);
	cart->addItem(item2);

	//pay by paypal
	PaymentStrategyIfc *paypal = new PaypalStrategyCls("mohamed.ali@gmail.com", "mypwd");
	//pay by credit card
	PaymentStrategyIfc *creditCard = new CreditCardStrategyCls("Mike Tyson","TR19352465125614575896", "299", "08/19");

	bool paymentDone = false;
	int selectedOption = 0;
	while(!paymentDone)
	{
		printf("\nTotal Bill Amount : %.2f %s"
				, cart->calculateTotal()
				, cart->getCurrency().c_str());
		printf("\nPlease select payment strategy. Your payment options : \n(1) : PayPal \n(2) : Credit Card \n(3) : Cancel/Quit");
		cin >> selectedOption;

		switch (selectedOption) {
		case 0:
			break;
		case 1:
		{

			if (cart->pay(paypal)) {
				printf("\nPayment with \"Paypal\" is \"Success\"");
				paymentDone = true;
			} else {
				printf("\nPayment with \"PayPal\" is Fail");
			}
			break;
		}
		case 2:
		{
			if (cart->pay(creditCard)) {
				printf("\nPayment with \"Credit Card\" is \"Success\"");
				paymentDone = true;
			} else {
				printf("\nPayment with \"Credit Card\" is Fail");
			}
			break;
		}
		case 3:
			printf("\nProcess is Canceled");
			paymentDone = true;
			break;
		default:
			break;
		}
	}
}

