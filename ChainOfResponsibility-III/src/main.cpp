/*
 * main.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include <vector>
#include <algorithm>
#include "ContactRequestHandlerCls.h"
#include "MessagesRequestHandlerCls.h"
#include "MemoryRequestHandlerCls.h"
#include "LocationRequestHandlerCls.h"
#include "ContactRequestCls.h"
#include "MessagesRequestCls.h"
#include "MemoryRequestCls.h"
#include "LocationRequestCls.h"


int main(){
	// Create Request Handler Lists.
	auto *contactHandler = new ContactRequestHandlerCls();

	contactHandler
	->setNextHandler(new MessagesRequestHandlerCls())
	->setNextHandler(new MemoryRequestHandlerCls())
	->setNextHandler(new LocationRequestHandlerCls());

	// Create Multiple requests.
	std::vector<RequestCls*> requestList;
	requestList.push_back(new ContactRequestCls(2342244, "Nokia-X23"));
	requestList.push_back(new MessagesRequestCls(2342244, "Hello Everyone ! how r u?"));
	requestList.push_back(new MemoryRequestCls(2342244, 2048, 543));
	requestList.push_back(new LocationRequestCls(2342244, 23434, 4645654));

	std::for_each(requestList.begin(), requestList.end(), [&](RequestCls *item){
		printf("\nStart of Chain");
		contactHandler->execute(item);
	});
}

