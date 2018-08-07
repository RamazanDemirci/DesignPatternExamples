/*
 * MetallicMoneyCls.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "MetallicMoneyCls.h"

MetallicMoneyCls::MetallicMoneyCls() {
	// TODO Auto-generated constructor stub

}

MetallicMoneyCls::~MetallicMoneyCls() {
	// TODO Auto-generated destructor stub
}

MoneyTypeEnum getMoneyType(){
	return MoneyTypeEnum::Metallic;
}

void getDisplayOfMoneyFalling(int moneyValue){
	/*This method would display graphical representation
	of a metallic currency like a gold coin.*/

	printf("Displaying a graphical object of %d currency of value %d falling from sky."
			, getMoneyType()
			, moneyValue);
}
