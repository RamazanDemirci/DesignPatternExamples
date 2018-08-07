/*
 * DirectorCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef DIRECTORCLS_H_
#define DIRECTORCLS_H_

#include "TalkableIfc.h"
#include "CommunicatorIfc.h"

class DirectorCls : public CommunicatorIfc {
public:
	DirectorCls();
	virtual ~DirectorCls();

	/*virtual*/ void startChatting();

	TalkableIfc* getObjectToTalk();
	void setObjectToTalk(TalkableIfc* objectToTalk);
};

#endif /* DIRECTORCLS_H_ */
