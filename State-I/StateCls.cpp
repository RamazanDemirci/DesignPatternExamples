/*
 * StateCls.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#include "stdio.h"
#include "StateCls.h"


StateCls::StateCls() {
	// TODO Auto-generated constructor stub

}

StateCls::~StateCls() {
	// TODO Auto-generated destructor stub
}

void StateCls::on(MachineCls *machine){
	printf("\n   already ON");
}
void StateCls::off(MachineCls *machine){
	printf("\n   already OFF");
}
