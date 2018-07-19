/*
 * ComputerPartIfc.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COMPUTERPARTIFC_H_
#define COMPUTERPARTIFC_H_

#include "ComputerPartVisitorIfc.h"

class ComputerPartIfc{
public:
	virtual void accept(ComputerPartVisitorIfc *computerPartVisitor) = 0;
};



#endif /* COMPUTERPARTIFC_H_ */
