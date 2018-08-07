/*
 * CommunicatorIfc.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef COMMUNICATORIFC_H_
#define COMMUNICATORIFC_H_

class TalkableIfc;

class CommunicatorIfc {
public:
	TalkableIfc * objectToTalk;	//build a bridge between a Communicator and a talkable object (Kid)

	virtual void startChatting() = 0;	//Start chatting process
};


#endif /* COMMUNICATORIFC_H_ */
