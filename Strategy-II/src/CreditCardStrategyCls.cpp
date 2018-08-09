/*
 * CreditCardStrategyCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "CreditCardStrategyCls.h"

CreditCardStrategyCls::CreditCardStrategyCls() {
	// TODO Auto-generated constructor stub
}

CreditCardStrategyCls::CreditCardStrategyCls(std::string name, std::string cardNumber, std::string cvv, std::string expiryDate) {
this->name = name;
this->cardNumber = cardNumber;
this->cvv = cvv;
this->dateOfExpiry = dateOfExpiry;
}

CreditCardStrategyCls::~CreditCardStrategyCls() {
	// TODO Auto-generated destructor stub
}

bool CreditCardStrategyCls::pay(int amount){
	printf("\n%d paid with credit/debit card", amount);
	return true;
}

