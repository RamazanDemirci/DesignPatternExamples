/*
 * MediatorIfc.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MEDIATORIFC_H_
#define MEDIATORIFC_H_

class BuyerCls;

class MediatorIfc{
public:
	virtual void addBuyer(BuyerCls *buyer) = 0;
	virtual void findHighestBidder() = 0;
};


#endif /* MEDIATORIFC_H_ */
