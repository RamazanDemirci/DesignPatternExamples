/*
 * RequestCls.cpp
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "RequestCls.h"

RequestCls::RequestCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

RequestCls::~RequestCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

RequestCls::RequestCls(RequestType type){
//	printf("\n%s", __FUNCTION__);
	this->type = type;
}

