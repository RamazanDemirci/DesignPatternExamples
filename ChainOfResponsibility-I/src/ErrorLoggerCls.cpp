/*
 * ErrorLoggerCls.cpp
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "ErrorLoggerCls.h"

ErrorLoggerCls::ErrorLoggerCls() {
	// TODO Auto-generated constructor stub

}

ErrorLoggerCls::ErrorLoggerCls(int level){
	this->level = level;
}

ErrorLoggerCls::~ErrorLoggerCls() {
	// TODO Auto-generated destructor stub
}

void ErrorLoggerCls::write(std::string message){
	printf("\nError Console::Logger: %s", message);
}

