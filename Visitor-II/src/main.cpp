/*
 * main.cpp
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#include <vector>
#include <algorithm>
#include "BookCls.h"
#include "FruitCls.h"
#include "ShoppingCartClientCls.h"

int calculatePrice(std::vector<ItemElementIfc*> itemList){
	ShoppingCartVisitorIfc *visitor = new ShoppingCartClientCls();
	int sum = 0;
	std::for_each(itemList.begin(), itemList.end(), [&](ItemElementIfc *item){
		sum = sum + item->accept(visitor);
	});

	return sum;
}

int main(){

	std::vector<ItemElementIfc*> itemList;

	itemList.push_back(new BookCls(20, "1234"));
	itemList.push_back(new BookCls(100, "5678"));
	itemList.push_back(new FruitCls(10, 2, "Banana"));
	itemList.push_back(new FruitCls(5, 5, "Apple"));

	int total = calculatePrice(itemList);
	printf("\n\n--------------------------");
	printf("\nTotal Cost = %d", total);
}
