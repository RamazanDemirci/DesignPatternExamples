/*
 * ChunLiCls.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "ChunLiCls.h"

ChunLiCls::ChunLiCls() {
	// TODO Auto-generated constructor stub
}

ChunLiCls::~ChunLiCls() {
	// TODO Auto-generated destructor stub
}

ChunLiCls::ChunLiCls(KickBehaviorIfc *kickBehavior, JumpBehaviorIfc *jumpBehavior){
	this->kickBehavior = kickBehavior;
	this->jumpBehavior = jumpBehavior;
	healthScore = 36;
	FighterCls::name = "Chun Li";
}

void ChunLiCls::display(){
	printf("\nChunLi : ");
	for(int i = 0; i < healthScore; i++) {
		printf("#");
	}
}

