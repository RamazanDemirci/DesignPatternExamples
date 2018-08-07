/*
 * OffCls.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "OffCls.h"
#include "OnCls.h"

OffCls::OffCls() {
	// TODO Auto-generated constructor stub
	printf("\n   OffCls-ctor ");
}

OffCls::~OffCls() {
	// TODO Auto-generated destructor stub
	printf("\n   dtor-OffCls ");
}

void OffCls::On(MachineCls *machine){
	printf("   going from OffCls to OnCls");
	machine->setCurrent(new OnCls());
	delete this;
}

