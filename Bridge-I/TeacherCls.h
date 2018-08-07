/*
 * TeacherCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef TEACHERCLS_H_
#define TEACHERCLS_H_

#include "CommunicatorIfc.h"
#include "KidCls.h"

class TeacherCls : public CommunicatorIfc {
public:
	TeacherCls();
	virtual ~TeacherCls();

	/*virtual*/ void startChatting();

	TalkableIfc* getObjectToTalk();
	void setObjectToTalk(TalkableIfc* objectToTalk);
};

#endif /* TEACHERCLS_H_ */
