/*
 * FighterCls.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "FighterCls.h"

FighterCls::FighterCls() {
	// TODO Auto-generated constructor stub

}

FighterCls::~FighterCls() {
	// TODO Auto-generated destructor stub
}

FighterCls::FighterCls(KickBehaviorIfc *kickBehavior, JumpBehaviorIfc *jumpBehavior){
	this->kickBehavior = kickBehavior;
	this->jumpBehavior = jumpBehavior;
}
void FighterCls::punch(){
	printf("\nDefault Punch");
	descHealthScore(2);
}

void FighterCls::kick(){
	//delegate to kick behavior
	descHealthScore(kickBehavior->kick());
}

void FighterCls::jump(){
	//delegate to jump behavior
	jumpBehavior->jump();
}

void FighterCls::roll(){
	printf("\nDefault Roll");
	incHealthScore(1);
}

void FighterCls::setKickBehavior(KickBehaviorIfc *kickBehavior){
	this->kickBehavior = kickBehavior;
}

void FighterCls::setJumpBehavior(JumpBehaviorIfc *jumpBehavior){
	this->jumpBehavior = jumpBehavior;
}

void FighterCls::descHealthScore(float damage){
	healthScore = (healthScore - damage);
	if(healthScore < 0){
		healthScore = 0;
	}
}

void FighterCls::incHealthScore(float cure){
	healthScore = (healthScore + cure);
	if(healthScore > 36){
		healthScore = 36;
	}
}
