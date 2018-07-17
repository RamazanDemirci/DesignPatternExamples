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
#include "Shop.h"

namespace Observer {

class ASubject {
public:
	ASubject();
	virtual ~ASubject();

	//Lets keep a track of all the shops we have observing
	std::vector<Shop*> list;

public:
	void Attach(Shop *product);
	void Detach(Shop *product);
	void Notify(float price);
};

} /* namespace Observer */

#endif /* ASUBJECT_H_ */
