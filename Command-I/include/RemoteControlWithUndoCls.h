/*
 * RemoteControlWithUndoCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef REMOTECONTROLWITHUNDOCLS_H_
#define REMOTECONTROLWITHUNDOCLS_H_

#include <string>
#include "CommandIfc.h"

#define COMMAND_SIZE 7

#include <stack>

class RemoteControlWithUndoCls {
public:
	RemoteControlWithUndoCls();
	virtual ~RemoteControlWithUndoCls();
	void setCommand(int slot, CommandIfc *onCommand, CommandIfc *offCommand);
	void onButtonWasPushed(int slot);
	void offButtonWasPushed(int slot);
	void undoButtonWasPushed();
	std::string toString();
private:
	CommandIfc* onCommandAry[COMMAND_SIZE];
	CommandIfc* offCommandAry[COMMAND_SIZE];
//	CommandIfc* undoCommand;
	std::stack<CommandIfc*> undoCommandStack;
};

#endif /* REMOTECONTROLWITHUNDOCLS_H_ */
