/*
 * LightningKickCls.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "LightningKickCls.h"

LightningKickCls::LightningKickCls() {
	// TODO Auto-generated constructor stub
	base::damage = 6;
}

LightningKickCls::~LightningKickCls() {
	// TODO Auto-generated destructor stub
}

float LightningKickCls::kick(){
	printf("\n Lightning Kick");
	return base::damage;
}

