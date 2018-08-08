/*
 * TornadoKickCls.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "TornadoKickCls.h"

TornadoKickCls::TornadoKickCls() {
	// TODO Auto-generated constructor stub
	base::damage = 9;
}

TornadoKickCls::~TornadoKickCls() {
	// TODO Auto-generated destructor stub
}

float TornadoKickCls::kick(){
	printf("\nTornado Kick");
	return base::damage;
}
