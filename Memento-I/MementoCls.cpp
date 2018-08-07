/*
 * MementoCls.cpp
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "MementoCls.h"

MementoCls::MementoCls() {
	// TODO Auto-generated constructor stub
	printf("\n%s", __FUNCTION__);
}

MementoCls::~MementoCls() {
	// TODO Auto-generated destructor stub
	printf("\n%s", __FUNCTION__);
}

MementoCls::MementoCls(int val){
	printf("\n%s", __FUNCTION__);
	this->state = val;
}

