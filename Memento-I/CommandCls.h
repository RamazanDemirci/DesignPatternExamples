/*
 * CommandCls.h
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef COMMANDCLS_H_
#define COMMANDCLS_H_

#include "NumberCls.h"

class CommandCls {
public:
	CommandCls();
	virtual ~CommandCls();
	typedef void(NumberCls:: *Action)();
	CommandCls(NumberCls *receiver, Action action);
	virtual void execute(){
		printf("\n%s", __FUNCTION__);
		mementoList[numCommands] = receiver->createMemento();
		commandList[numCommands] = this;
		if (numCommands > highWater)
			highWater = numCommands;
		numCommands++;
		(receiver->*action)();
	}
	static void undo();
	static void redo();
protected:
	NumberCls *receiver;
	Action action;
	static CommandCls *commandList[20];
	static MementoCls *mementoList[20];
	static int numCommands;
	static int highWater;
};

#endif /* COMMANDCLS_H_ */
