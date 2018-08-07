/*
 * OnCls.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "OnCls.h"
#include "OffCls.h"

OnCls::OnCls() {
	// TODO Auto-generated constructor stub
	printf("\n   OnCls-ctor ");
}

OnCls::~OnCls() {
	// TODO Auto-generated destructor stub
	printf("\n   dtor-OnCls ");
}

void OnCls::off(MachineCls * machine){
	printf("   going from OnCls to OffCls");
	machine->setCurrent(new OffCls());
	delete this;
}
