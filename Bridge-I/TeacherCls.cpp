/*
 * TeacherCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include <string>
#include "TeacherCls.h"

TeacherCls::TeacherCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

TeacherCls::~TeacherCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

TalkableIfc* TeacherCls::getObjectToTalk(){
//	printf("\n%s", __FUNCTION__);
	return this->objectToTalk;
}

void TeacherCls::setObjectToTalk(TalkableIfc* objectToTalk){
//	printf("\n%s", __FUNCTION__);
	this->objectToTalk = objectToTalk;
}

void TeacherCls::startChatting(){
//	printf("\n%s", __FUNCTION__);
	printf("\nWhat's your name?");
	this->objectToTalk->TellMeAboutName();

	printf("\nHow old are you?");
	this->objectToTalk->TellMeAboutAge();

	printf("\nWhat's your favor food");
	this->objectToTalk->TellMeAboutFavorFood();
}

