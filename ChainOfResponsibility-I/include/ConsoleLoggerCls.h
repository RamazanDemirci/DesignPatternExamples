/*
 * ConsoleLoggerCls.h
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CONSOLELOGGERCLS_H_
#define CONSOLELOGGERCLS_H_

#include "LoggerCls.h"

class ConsoleLoggerCls : public LoggerCls {
public:
	ConsoleLoggerCls();
	ConsoleLoggerCls(int level);
	virtual ~ConsoleLoggerCls();
protected:
	void write(std::string message);
};

#endif /* CONSOLELOGGERCLS_H_ */
