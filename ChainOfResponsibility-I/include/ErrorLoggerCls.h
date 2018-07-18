/*
 * ErrorLoggerCls.h
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ERRORLOGGERCLS_H_
#define ERRORLOGGERCLS_H_

#include "LoggerCls.h"

class ErrorLoggerCls : public LoggerCls {
public:
	ErrorLoggerCls();
	ErrorLoggerCls(int level);
	virtual ~ErrorLoggerCls();
protected:
	void write(std::string message);
};

#endif /* ERRORLOGGERCLS_H_ */
