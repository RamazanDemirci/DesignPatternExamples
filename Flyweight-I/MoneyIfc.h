/*
 * MoneyIfc.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef MONEYIFC_H_
#define MONEYIFC_H_

typedef enum {
	  Metallic
	, Paper
}MoneyTypeEnum;

class MoneyIfc {
public:
	virtual MoneyTypeEnum getMoneyType() = 0;
	virtual void getDisplayOfMoneyFalling(int moneyValue) = 0;
private:
	MoneyTypeEnum moneyType;
};


#endif /* MONEYIFC_H_ */
