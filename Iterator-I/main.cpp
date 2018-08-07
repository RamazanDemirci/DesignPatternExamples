/*
 * main.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "IteratorIfc.h"
#include "CollectionIfc.h"
#include "CollectionCls.h"
#include "ItemCls.h"
#include "IteratorCls.h"

int main(){
	printf("\nHello World!!!");

	// Build a collection

	CollectionCls *collection = new CollectionCls();
	collection[0] = *(CollectionCls*)new ItemCls("Item 0");
/*	collection[1] = *(CollectionCls*)new ItemCls("Item 1");
	collection[2] = *(CollectionCls*)new ItemCls("Item 2");
	collection[3] = *(CollectionCls*)new ItemCls("Item 3");
	collection[4] = *(CollectionCls*)new ItemCls("Item 4");
	collection[5] = *(CollectionCls*)new ItemCls("Item 5");
	collection[6] = *(CollectionCls*)new ItemCls("Item 6");
	collection[7] = *(CollectionCls*)new ItemCls("Item 7");
	collection[8] = *(CollectionCls*)new ItemCls("Item 8");

	// Create iterator

	IteratorCls *iterator = collection->CreateIterator();

	// Skip every other item

	iterator->setStep(2);

	printf("\nIterating over collection:");

	for (ItemCls *item = iterator->First();
			!iterator->isDone(); item = iterator->Next())
	{
		printf("%s", item->getName());
	}
*/
}

