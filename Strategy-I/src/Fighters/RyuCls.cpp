/*
 * RyuCls.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "RyuCls.h"

RyuCls::RyuCls() {
	// TODO Auto-generated constructor stub
}

RyuCls::~RyuCls() {
	// TODO Auto-generated destructor stub
}

RyuCls::RyuCls(KickBehaviorIfc *kickBehavior, JumpBehaviorIfc *jumpBehavior){
	this->kickBehavior = kickBehavior;
	this->jumpBehavior = jumpBehavior;
	healthScore = 36;
	FighterCls::name = "Ryu";
}

void RyuCls::display(){
	printf("\nRyu : ");
	for(int i = 0; i < healthScore; i++) {
			printf("\\");
		}
}
