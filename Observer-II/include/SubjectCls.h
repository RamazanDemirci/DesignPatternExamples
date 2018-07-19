/*
 * ASubject.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ASUBJECT_H_
#define ASUBJECT_H_
//#pragma once

#include <ShopCls.h>
#include <vector>
#include <list>

namespace Observer {

class SubjectCls {
public:
	SubjectCls();
	virtual ~SubjectCls();

	//Lets keep a track of all the shops we have observing
	std::vector<ShopCls*> list;

public:
	void Attach(ShopCls *product);
	void Detach(ShopCls *product);
	void Notify(float price);
};

} /* namespace Observer */

#endif /* ASUBJECT_H_ */
