/*
 * main.cpp
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#include "FileLoggerCls.h"
#include "LoggerCls.h"
#include "ErrorLoggerCls.h"
#include "ConsoleLoggerCls.h"

static LoggerCls* getChainOfLoggers(){
	LoggerCls *errorLogger = new ErrorLoggerCls(LoggerCls::ERROR);
	LoggerCls *fileLogger = new FileLoggerCls(LoggerCls::DEBUG);
	LoggerCls *consoleLogger = new ConsoleLoggerCls(LoggerCls::INFO);

	errorLogger->setNextLogger(fileLogger);
	fileLogger->setNextLogger(consoleLogger);

	return errorLogger;
}

int main(){
	LoggerCls *loggerChain = getChainOfLoggers();

	loggerChain->logMessage(LoggerCls::INFO, "This is an information.");

	loggerChain->logMessage(LoggerCls::DEBUG, "This is an debug level information.");

	loggerChain->logMessage(LoggerCls::ERROR, "This is an error information.");
}

