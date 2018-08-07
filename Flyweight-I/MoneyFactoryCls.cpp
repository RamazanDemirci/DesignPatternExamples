/*
 * MoneyFactoryCls.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#include "MoneyFactoryCls.h"
#include "MetallicMoneyCls.h"
#include "PaperMoneyCls.h"


MoneyFactoryCls::MoneyFactoryCls() {
	// TODO Auto-generated constructor stub
	ObjectsCount = 0;
}

MoneyFactoryCls::~MoneyFactoryCls() {
	// TODO Auto-generated destructor stub
}

MoneyIfc* MoneyFactoryCls::GetMoneyToDisplay(MoneyTypeEnum type) {
	if (moneyMap.find(type) != moneyMap.end()) {
		return moneyMap[type];
	}

	switch (type) {
	case MoneyTypeEnum::Metallic:
		moneyMap[type] = (MoneyIfc*)(new MetallicMoneyCls());
		ObjectsCount++;
		break;
	case MoneyTypeEnum::Paper:
		moneyMap[type] = (MoneyIfc*)(new PaperMoneyCls());
		ObjectsCount++;
		break;
	default:
		break;
	}
	return moneyMap[type];
}
