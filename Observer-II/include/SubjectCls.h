/*
 * ASubject.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ASUBJECT_H_
#define ASUBJECT_H_
//#pragma once


#include <vector>
#include <list>
#include <string>
#include "ObserverIfc.h"

namespace Observer {

class SubjectCls {
public:
	SubjectCls();
	virtual ~SubjectCls();

	//Lets keep a track of all the shops we have observing
	std::vector<ObserverIfc*> list;

public:
	void Attach(ObserverIfc *product);	/*add the observer to observer list*/
	void Detach(ObserverIfc *product);	/*remove the observer from observer list*/
	void Notify();	/*update all observer in the observer list*/

	float price;
	std::string name;
};

} /* namespace Observer */

#endif /* ASUBJECT_H_ */
