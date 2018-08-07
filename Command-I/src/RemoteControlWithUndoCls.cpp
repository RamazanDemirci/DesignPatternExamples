/*
 * RemoteControlWithUndoCls.cpp
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#include "NoCommandCls.h"
#include "RemoteControlWithUndoCls.h"

RemoteControlWithUndoCls::RemoteControlWithUndoCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
	CommandIfc *noCommand = new NoCommandCls();
	for(int i = 0; i < 7; i++) {
		onCommandAry[i] = noCommand;
		offCommandAry[i] = noCommand;
	}
//	undoCommand = noCommand;
//	undoCommandStack.push(noCommand);
}

RemoteControlWithUndoCls::~RemoteControlWithUndoCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void RemoteControlWithUndoCls::setCommand(int slot, CommandIfc *onCommand, CommandIfc *offCommand){
//	printf("\n%s", __FUNCTION__);
	this->onCommandAry[slot] = onCommand;
	this->offCommandAry[slot] = offCommand;
}

void RemoteControlWithUndoCls::onButtonWasPushed(int slot){
//	printf("\n%s", __FUNCTION__);
	this->onCommandAry[slot]->execute();
//	this->undoCommand = onCommandAry[slot];
	undoCommandStack.push(onCommandAry[slot]);
}

void RemoteControlWithUndoCls::offButtonWasPushed(int slot){
//	printf("\n%s", __FUNCTION__);
	this->offCommandAry[slot]->execute();
	undoCommandStack.push(offCommandAry[slot]);
}

void RemoteControlWithUndoCls::undoButtonWasPushed(){
//	printf("\n%s", __FUNCTION__);
//	this->undoCommand->undo();
	if(!undoCommandStack.empty()) {
		printf("\nstackSize : %d", undoCommandStack.size());
		undoCommandStack.top()->undo();
		undoCommandStack.pop();
	}
	else{
		printf("\nHistory is Empty!!!");
	}
}

std::string RemoteControlWithUndoCls::toString(){
	std::string stringBuilder;
	stringBuilder.append("\n------ Remote Control -------\n");
	for (int i = 0; i < COMMAND_SIZE; i++) {
		char str[10];
		sprintf(str, "\n[slot %d]", i);
		stringBuilder.append(str);
	}
	stringBuilder.append("\n[undo]");
	return stringBuilder;
}
