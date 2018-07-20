/*
 * SMSUsersCls.cpp
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#include <stdexcept>
#include "SMSUsersCls.h"

SMSUsersCls::SMSUsersCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

SMSUsersCls::SMSUsersCls(SubjectIfc *subject, std::string userInfo){
//	printf("\n%s", __FUNCTION__);
	if (subject == NULL) {
		throw std::invalid_argument("No Publisher found.");
	}
	this->subject = subject;
	this->userInfo = userInfo;
}

SMSUsersCls::~SMSUsersCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void SMSUsersCls::update(std::string desc){
//	printf("\n%s", __FUNCTION__);
	this->desc = desc;
	display();
}

void SMSUsersCls::display(){
//	printf("\n%s", __FUNCTION__);
	printf("\n[%30s] : %s",this->userInfo.c_str(), desc.c_str());
}

void SMSUsersCls::subscribe(){
//	printf("\n%s", __FUNCTION__);
	printf("\nSubscribing \"%s\" to \"%s\" ..."
			, this->userInfo.c_str()
			, this->subject->subjectDetails().c_str());
	this->subject->subscribeObserver(this);
	printf("\nSubscribed successfully.");

}

void SMSUsersCls::unsubscribe(){
//	printf("\n%s", __FUNCTION__);
	printf("\nUnsubscribing  \"%s\" from \"%s\" ..."
			, this->userInfo.c_str()
			, this->subject->subjectDetails().c_str());
	this->subject->unsubscribeObserver(this);
	printf("\nUnsubscribe successfully.");
}
