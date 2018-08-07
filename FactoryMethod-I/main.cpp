/*
 * main.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include "FactoryCls.h"

int main(){
	for(int i = 0; i < 3; i++){
		auto type = FactoryCls::Get(i);
		if(type != NULL){
			printf("\nThis is Product : %s", type->functionality().c_str());
		}
	}
}


