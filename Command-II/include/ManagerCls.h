/*
 * ManagerCls.h
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MANAGERCLS_H_
#define MANAGERCLS_H_

#include <map>
#include <vector>
#include "CommandIfc.h"

typedef enum {
	  OIL
	, ELECTRICALS
}CommandType;

class ManagerCls {
public:
	ManagerCls();
	virtual ~ManagerCls();
	void addRequest(CommandType type, CommandIfc *command);
	void processRequest(CommandType type);
private:
	std::map<CommandType, CommandIfc *> commandMap;
};

#endif /* MANAGERCLS_H_ */
