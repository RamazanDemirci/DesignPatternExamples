/*
 * main.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include "ComputerPartIfc.h"
#include "ComputerPartDisplayVisitorCls.h"

int main(){
	ComputerPartIfc *computer = new ComputerCls();

	printf("\n**********Display Computer Parts**********");
	computer->accept(new ComputerPartDisplayVisitorCls());
	printf("\n******************************************");
}

