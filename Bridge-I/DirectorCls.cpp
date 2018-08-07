/*
 * DirectorCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "DirectorCls.h"

DirectorCls::DirectorCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

DirectorCls::~DirectorCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

TalkableIfc* DirectorCls::getObjectToTalk(){
//	printf("\n%s", __FUNCTION__);
	return this->objectToTalk;
}

void DirectorCls::setObjectToTalk(TalkableIfc* objectToTalk){
//	printf("\n%s", __FUNCTION__);
	this->objectToTalk = objectToTalk;
}

void DirectorCls::startChatting(){
//	printf("\n%s", __FUNCTION__);
	printf("\nHi, can you tell me your name?");
	this->objectToTalk->TellMeAboutName();

	printf("\nHi, can you tell me your age?");
	this->objectToTalk->TellMeAboutAge();
}
