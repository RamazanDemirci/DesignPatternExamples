/*
 * FileLogger.h
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#ifndef FILELOGGER_H_
#define FILELOGGER_H_

#include "LoggerCls.h"

class FileLoggerCls : public LoggerCls {
public:
	FileLoggerCls();
	FileLoggerCls(int level);
	virtual ~FileLoggerCls();
protected:
	void write(std::string message);
};

#endif /* FILELOGGER_H_ */
