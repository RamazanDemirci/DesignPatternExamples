/*
 * ConsoleLoggerCls.cpp
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#include "ConsoleLoggerCls.h"

ConsoleLoggerCls::ConsoleLoggerCls() {
	// TODO Auto-generated constructor stub

}

ConsoleLoggerCls::ConsoleLoggerCls(int level) {
	// TODO Auto-generated constructor stub
	this->level = level;
}

ConsoleLoggerCls::~ConsoleLoggerCls() {
	// TODO Auto-generated destructor stub
}

void ConsoleLoggerCls::write(std::string message){
	printf("\nStandard Console::Logger: %s", message);
}

