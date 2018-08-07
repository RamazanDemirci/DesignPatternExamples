/*
 * MachineCls.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "MachineCls.h"
#include "OffCls.h"

MachineCls::MachineCls() {
	// TODO Auto-generated constructor stub
	this->current = new OffCls();
	printf("\n");
}

MachineCls::~MachineCls() {
	// TODO Auto-generated destructor stub
}

void MachineCls::setCurrent(StateCls *state){
	this->current = state;
}

void MachineCls::on(){
	this->current->on(this);
}

void MachineCls::off(){
	this->current->off(this);
}
