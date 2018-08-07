/*
 * main.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

/*
 * ref : https://sourcemaking.com/design_patterns/state/cpp/1
 *
 * */

#include <stdio.h>
#include <iostream>
#include "MachineCls.h"
#include "OnCls.h"
#include "OffCls.h"

int main() {

	void (MachineCls::*ptrs[])() =
	{
		&MachineCls::off, &MachineCls::on
	};

	MachineCls fsm;
	int num;

	while (true) {
		printf("\nEnter 0/1: ");

		std::cin >> num;

		if( (num == 0) || (num == 1) ) {
			(fsm.*ptrs[num])();
		}
	}
}

