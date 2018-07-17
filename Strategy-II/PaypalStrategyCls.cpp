/*
 * PaypalStrategyCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "PaypalStrategyCls.h"

PaypalStrategyCls::PaypalStrategyCls() {
	// TODO Auto-generated constructor stub

}

PaypalStrategyCls::PaypalStrategyCls(std::string email, std::string pwd){
	this->emailId = email;
	this->password = pwd;
}

PaypalStrategyCls::~PaypalStrategyCls() {
	// TODO Auto-generated destructor stub
}

void PaypalStrategyCls::pay(int amount) {
	printf("\n%d paid using Paypal.", amount);
}

