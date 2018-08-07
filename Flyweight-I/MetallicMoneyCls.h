/*
 * MetallicMoneyCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef METALLICMONEYCLS_H_
#define METALLICMONEYCLS_H_

#include "MoneyIfc.h"

class MetallicMoneyCls : public MoneyIfc {
public:
	MetallicMoneyCls();
	virtual ~MetallicMoneyCls();
	/*virtual*/ MoneyTypeEnum getMoneyType();
	/*virtual*/ void getDisplayOfMoneyFalling(int moneyValue);
};

#endif /* METALLICMONEYCLS_H_ */
