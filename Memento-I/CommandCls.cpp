/*
 * CommandCls.cpp
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "CommandCls.h"

CommandCls::CommandCls() {
	// TODO Auto-generated constructor stub
	printf("\n%s", __FUNCTION__);
}

CommandCls::~CommandCls() {
	// TODO Auto-generated destructor stub
	printf("\n%s", __FUNCTION__);
}

CommandCls::CommandCls(NumberCls *receiver, Action action){
	printf("\n%s", __FUNCTION__);
	this->receiver = receiver;
	this->action = action;
}

void CommandCls::undo(){
	printf("\n%s", __FUNCTION__);
	if(numCommands == 0){
		printf("\n*** Attempt to run off the end!! ***");
		return;
	}

	commandList[numCommands - 1]->receiver->reinstateMemento(mementoList[numCommands - 1]);
	numCommands--;
}

void CommandCls::redo(){
	printf("\n%s", __FUNCTION__);
	if(numCommands > highWater){
		printf("\n*** Attempt to run off the end!! ***");
		return;
	}

	(commandList[numCommands - 1]->receiver->*(commandList[numCommands]->action))();

	numCommands++;
}
