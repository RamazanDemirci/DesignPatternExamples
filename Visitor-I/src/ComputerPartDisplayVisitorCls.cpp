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
	printf("\nDisplaying Computer.");
}

void ComputerPartDisplayVisitorCls::visit(MouseCls *mouse){
	printf("\nDisplaying Mouse.");
}

void ComputerPartDisplayVisitorCls::visit(KeyboardCls *keyboard){
	printf("\nDisplaying Keyboard.");
}

void ComputerPartDisplayVisitorCls::visit(MonitorCls *monitor){
	printf("\nDisplaying Monitor.");
}

