/*
 * MediatorIfc.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MEDIATORIFC_H_
#define MEDIATORIFC_H_

#include <string>

class ColleagueCls;

class MediatorIfc{
public:
	virtual void saleOffer(std::string stock, int shares, int colleagueCode) = 0;
	virtual void buyOffer(std::string stock, int shares, int colleagueCode) = 0;
	virtual void addColleague(ColleagueCls *colleague) = 0;
};


#endif /* MEDIATORIFC_H_ */
