/*
 * ManagerCls.cpp
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */


#include <utility>
#include <string>
#include "ManagerCls.h"

using namespace std;

ManagerCls::ManagerCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

ManagerCls::~ManagerCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void ManagerCls::addRequest(CommandType type, CommandIfc *command){
//	printf("\n%s", __FUNCTION__);
	//commandMap.insert(make_pair(type, command));
	commandMap[type] = command;
}

void ManagerCls::processRequest(CommandType type){
//	printf("\n%s", __FUNCTION__);
	commandMap[type]->execute();
}

