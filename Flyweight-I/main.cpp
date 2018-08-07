/*
 * main.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

/*
 *
 * https://www.codeproject.com/Articles/793623/Flyweight-Design-Pattern-Csharp
 * */

#include <random>
#include "MetallicMoneyCls.h"
#include "PaperMoneyCls.h"
#include "MoneyFactoryCls.h"

int main() {
	const int ONE_MILLION = 10000; // <--- Suppose this is one million :)
	int currencyDenominations[6] = { 1, 5, 10, 20, 50, 100 };
	MoneyFactoryCls *moneyFactory = new MoneyFactoryCls();
	int sum = 0;
	while (sum <= ONE_MILLION) {
		MoneyIfc *graphicalMoneyObj = NULL;
		int currencyDisplayValue = currencyDenominations[rand() % 6];
		if (currencyDisplayValue == 1 || currencyDisplayValue == 5)
			graphicalMoneyObj = moneyFactory->GetMoneyToDisplay(
					MoneyTypeEnum::Metallic);
		else
			graphicalMoneyObj = moneyFactory->GetMoneyToDisplay(
					MoneyTypeEnum::Paper);

		graphicalMoneyObj->getDisplayOfMoneyFalling(currencyDisplayValue);
		sum = sum + currencyDisplayValue;
	}
	printf("Total Objects created = %d", MoneyFactoryCls::ObjectsCount);
}
