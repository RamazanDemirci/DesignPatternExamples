/*
 * ComputerPartDisplayVisitorCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include "ComputerPartDisplayVisitorCls.h"

ComputerPartDisplayVisitorCls::ComputerPartDisplayVisitorCls() {
	// TODO Auto-generated constructor stub

}

ComputerPartDisplayVisitorCls::~ComputerPartDisplayVisitorCls() {
	// TODO Auto-generated destructor stub
}

void ComputerPartDisplayVisitorCls::visit(ComputerCls *computer){
	printf("\n-----Computer General Features-----");
	printf("\nMemory Size       : %s", "512Mb");
	printf("\nHardDisc Size     : %s", "20Gb");
	printf("\nGraphics Card Size: %s", "128Mb");
}

void ComputerPartDisplayVisitorCls::visit(MouseCls *mouse){
	printf("\n-----Mouse General Features-----");
	printf("\nBrand                   : %s", "A4-Tech");
	printf("\nCommunication Type      : %s", "Wireless");
	printf("\nPosition Detection Type : %s", "Optic");
}

void ComputerPartDisplayVisitorCls::visit(KeyboardCls *keyboard){
	printf("\n-----Keyboard General Features-----");
	printf("\nBrand                   : %s", "Logitech");
	printf("\nCommunication Type      : %s", "Wired");
	printf("\nAlphabet Type           : %s", "QWERTY-EN");
}

void ComputerPartDisplayVisitorCls::visit(MonitorCls *monitor){
	printf("\n-----Monitor General Features-----");
	printf("\nBrand                   : %s", "LG");
	printf("\nScreen Technology       : %s", "LCD");
	printf("\nMonitor Type            : %s", "Flat");
}

