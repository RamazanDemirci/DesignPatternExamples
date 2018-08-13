/*
 * main.cpp
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#include <vector>
#include <algorithm>
#include <random>
#include <time.h>
#include "BookCls.h"
#include "FruitCls.h"
#include "ShoppingCartClientCls.h"

float calculatePrice(std::vector<ItemElementIfc*> itemList){
	ShoppingCartVisitorIfc *visitor = new ShoppingCartClientCls();
	float sum = 0;
	std::for_each(itemList.begin(), itemList.end(), [&](ItemElementIfc *item){
		sum = sum + item->accept(visitor);
	});

	return sum;
}

int main(){

	srand(time(NULL));

	std::vector<ItemElementIfc*> itemList;

	printf("\n***********************SHOPPING BILL***********************");
	printf("\n%-10s %-10s %-20s %-10s"
			, "Category"
			, "Title"
			, "Description"
			, "Cost");
	printf("\n-----------------------------------------------------------");
	itemList.push_back(new BookCls(19.95, "978-06-95055-01-8", "Ince Memed"));
	itemList.push_back(new BookCls(29.95, "156-14-48264-03-7", "Othello"));
	itemList.push_back(new FruitCls(6.99, ((rand() % 5) + 1), "Banana", "Ecuador"));
	itemList.push_back(new FruitCls(8.56, ((rand() % 3) + 1), "Apple", "Amasya"));
	itemList.push_back(new FruitCls(12.78, 1.6, "Strawberry", "Albion"));

	float total = calculatePrice(itemList);
	printf("\n-----------------------------------------------------------");
	printf("\n%-53s%-.2f", "Total", total);
}
