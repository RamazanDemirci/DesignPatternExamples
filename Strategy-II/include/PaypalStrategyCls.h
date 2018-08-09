/*
 * PaypalStrategyCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PAYPALSTRATEGYCLS_H_
#define PAYPALSTRATEGYCLS_H_

#include <string>
#include "PaymentStrategyIfc.h"

class PaypalStrategyCls : public PaymentStrategyIfc {
public:
	PaypalStrategyCls();
	PaypalStrategyCls(std::string email, std::string pwd);
	virtual ~PaypalStrategyCls();
	/*virtual*/bool pay(int amount);
private:
	std::string emailId;
	std::string password;

};

#endif /* PAYPALSTRATEGYCLS_H_ */
