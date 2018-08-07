/*
 * AlertStateContextCls.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#include "AlertStateContextCls.h"
#include "VibrationCls.h"

AlertStateContextCls::AlertStateContextCls() {
	// TODO Auto-generated constructor stub
	this->currentState = new VibrationCls();
}

AlertStateContextCls::~AlertStateContextCls() {
	// TODO Auto-generated destructor stub
}

void AlertStateContextCls::setState(MobileAlertStateIfc *state){
	this->currentState = state;
}

void AlertStateContextCls::alert(){
	this->currentState->alert(this);
}

