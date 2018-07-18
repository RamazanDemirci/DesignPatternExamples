/*
 * LoggerCls.cpp
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#include <cstddef>
#include "LoggerCls.h"

LoggerCls::LoggerCls() {
	// TODO Auto-generated constructor stub

}

LoggerCls::LoggerCls(int level){
	this->level = level;
}

LoggerCls::~LoggerCls() {
	// TODO Auto-generated destructor stub
}

void LoggerCls::setNextLogger(LoggerCls *nextLogger){
	this->nextLogger = nextLogger;
}

void LoggerCls::logMessage(int level, std::string message){
	if(this->level <= level){
		write(message);
	}
	if(nextLogger != NULL){
		nextLogger->logMessage(level, message);
	}
}

