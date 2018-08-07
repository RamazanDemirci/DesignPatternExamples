/*
 * MoneyFactoryCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef MONEYFACTORYCLS_H_
#define MONEYFACTORYCLS_H_

#include <map>
#include "MoneyIfc.h"

class MoneyFactoryCls {
public:
	MoneyFactoryCls();
	virtual ~MoneyFactoryCls();
	MoneyIfc* GetMoneyToDisplay(MoneyTypeEnum form); // Same as GetFlyWeight()

	static int ObjectsCount;

private:
	std::map<MoneyTypeEnum, MoneyIfc*> moneyMap;

};

#endif /* MONEYFACTORYCLS_H_ */
