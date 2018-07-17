/*
 * PaymentStrategyIfc.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PAYMENTSTRATEGYIFC_H_
#define PAYMENTSTRATEGYIFC_H_


class PaymentStrategyIfc {
public:
	virtual void pay(int amount) = 0;
};


#endif /* PAYMENTSTRATEGYIFC_H_ */
