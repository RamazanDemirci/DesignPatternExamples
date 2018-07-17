/*
 * CreditCardStrategyCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CREDITCARDSTRATEGYCLS_H_
#define CREDITCARDSTRATEGYCLS_H_

#include <string>
#include "PaymentStrategyIfc.h"

class CreditCardStrategyCls : public PaymentStrategyIfc {
public:
	CreditCardStrategyCls();
	CreditCardStrategyCls(std::string name, std::string cardNumber, std::string cvv, std::string expiryDate);
	virtual ~CreditCardStrategyCls();
	void pay(int amount);
private:
	std::string name;
	std::string cardNumber;
	std::string cvv;
	std::string dateOfExpiry;
};

#endif /* CREDITCARDSTRATEGYCLS_H_ */
