/*
 * ItemElementIfc.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ITEMELEMENTIFC_H_
#define ITEMELEMENTIFC_H_

class ShoppingCartVisitorIfc;

class ItemElementIfc {
public:
	virtual int accept(ShoppingCartVisitorIfc *visitor) = 0;
};


#endif /* ITEMELEMENTIFC_H_ */
