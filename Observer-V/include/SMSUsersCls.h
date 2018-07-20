/*
 * SMSUsersCls.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SMSUSERSCLS_H_
#define SMSUSERSCLS_H_

#include <string>
#include "ObserverIfc.h"
#include "SubjectIfc.h"

class SMSUsersCls : public ObserverIfc {
public:
	SMSUsersCls();
	SMSUsersCls(SubjectIfc *subject, std::string userInfo);
	virtual ~SMSUsersCls();
	void update(std::string desc);
	void display();
	void subscribe();
	void unsubscribe();
private:
	SubjectIfc *subject;
	std::string desc;
	std::string userInfo;
};

#endif /* SMSUSERSCLS_H_ */
