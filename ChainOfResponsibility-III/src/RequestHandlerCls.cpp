/*
 * RequestHandlerCls.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include <iostream>
#include "RequestHandlerCls.h"

RequestHandlerCls::RequestHandlerCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
	this->nextHandler = NULL;
}

RequestHandlerCls::~RequestHandlerCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}
void RequestHandlerCls::execute(RequestCls *request){
//	printf("\n\n%s", __FUNCTION__);
	process(request);
	pushNext(request);
}

RequestHandlerCls* RequestHandlerCls::setNextHandler(RequestHandlerCls *handler){
//	printf("\n%s", __FUNCTION__);
	this->nextHandler = handler;
	return this->nextHandler;
}

void RequestHandlerCls::pushNext(RequestCls *request){
//	printf("\n%s", __FUNCTION__);
	if(this->nextHandler != NULL){
		this->nextHandler->execute(request);
	}
	else
		printf("\nEnd of Chain!!!");
}
