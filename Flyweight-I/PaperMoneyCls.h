/*
 * PaperMoneyCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef PAPERMONEYCLS_H_
#define PAPERMONEYCLS_H_

#include "MoneyIfc.h"

class PaperMoneyCls : public MoneyIfc {
public:
	PaperMoneyCls();
	virtual ~PaperMoneyCls();
	/*virtual*/ MoneyTypeEnum getMoneyType();
	/*virtual*/ void getDisplayOfMoneyFalling(int moneyValue);
};

#endif /* PAPERMONEYCLS_H_ */
