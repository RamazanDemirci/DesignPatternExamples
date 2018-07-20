/*
 * main.cpp
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#include <string>
#include "SubjectIfc.h"
#include "CommentaryObjectCls.h"
#include "SMSUsersCls.h"

int main(){
	SubjectIfc *subject = new CommentaryObjectCls(std::string("Soccer Match [2014AUG24]"));
	//CommentaryIfc *cObject = new CommentaryObjectCls(std::string("Soccer Match [2014AUG24]"));
	ObserverIfc *observer1 = new SMSUsersCls(subject, "Adam Warner [New York]");
	observer1->subscribe();

	ObserverIfc *observer2 = new SMSUsersCls(subject, "Tim Ronney [London]");
	observer2->subscribe();

	CommentaryIfc *cObject = dynamic_cast<CommentaryIfc*>(subject);
	cObject->setDesc("T:19:30 ->Welcome to live Soccer match");
	cObject->setDesc("T:19:34 ->Current score 0-0");

	observer2->unsubscribe();

	cObject->setDesc("T:19:52 ->It's a goal!!");
	cObject->setDesc("T:19:53 ->Current score 1-0");
	ObserverIfc *observer3 = new SMSUsersCls(subject, "Marrie [Paris]");
	observer3->subscribe();

	cObject->setDesc("T:20:12 ->It's another goal!!");
	cObject->setDesc("T:20:15 ->Half-time score 2-0");
}

