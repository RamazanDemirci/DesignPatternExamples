/*
 * FileLogger.cpp
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#include <FileLoggerCls.h>

FileLoggerCls::FileLoggerCls() {
	// TODO Auto-generated constructor stub

}

FileLoggerCls::FileLoggerCls(int level) {
	// TODO Auto-generated constructor stub
	this->level = level;
}

FileLoggerCls::~FileLoggerCls() {
	// TODO Auto-generated destructor stub
}

void FileLoggerCls::write(std::string message){
	printf("\nFile::Logger: %s", message);
}

