/*
 * ColleagueCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COLLEAGUECLS_H_
#define COLLEAGUECLS_H_

#include <string>
#include "MediatorIfc.h"

class ColleagueCls {
public:
	ColleagueCls();
	virtual ~ColleagueCls();
	ColleagueCls(MediatorIfc *newMediator);
	void saleOffer(std::string stock, int shares);
	void buyOffer(std::string stock, int shares);
	void setCollCode(int collCode);
protected:
	MediatorIfc *mediator;
	int colleagueCode;
};

#endif /* COLLEAGUECLS_H_ */
