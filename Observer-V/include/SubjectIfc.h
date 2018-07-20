/*
 * SubjectIfc.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SUBJECTIFC_H_
#define SUBJECTIFC_H_

#include <string>

class ObserverIfc;

class SubjectIfc {
public:
	virtual void subscribeObserver(ObserverIfc *observer) = 0;
	virtual void unsubscribeObserver(ObserverIfc *observer) = 0;
	virtual void notifyObservers() = 0;
	virtual std::string subjectDetails() = 0;
};



#endif /* SUBJECTIFC_H_ */
