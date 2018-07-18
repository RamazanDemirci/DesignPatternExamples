/*
 * LoggerCls.h
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LOGGERCLS_H_
#define LOGGERCLS_H_

#include <string>

class LoggerCls {
public:
	LoggerCls();
	LoggerCls(int level);
	virtual ~LoggerCls();
	void setNextLogger(LoggerCls *nextLogger);
	void logMessage(int level, std::string message);
protected:
	int level;
	LoggerCls *nextLogger;	//next element in chain or responsibility

	virtual void write(std::string message) = 0;
public:
	static const int INFO = 1;
	static const int DEBUG = 2;
	static const int ERROR = 3;
};

#endif /* LOGGERCLS_H_ */
