/*
 * KenCls.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "KenCls.h"

KenCls::KenCls() {
	// TODO Auto-generated constructor stub
}

KenCls::~KenCls() {
	// TODO Auto-generated destructor stub
}

KenCls::KenCls(KickBehaviorIfc *kickBehavior, JumpBehaviorIfc *jumpBehavior){
	this->kickBehavior = kickBehavior;
	this->jumpBehavior = jumpBehavior;
	healthScore = 36;
	FighterCls::name = "Ken";
}

void KenCls::display(){
	printf("\nKen    : ");
	for(int i = 0; i < healthScore; i++) {
		printf("/");
	}
}

