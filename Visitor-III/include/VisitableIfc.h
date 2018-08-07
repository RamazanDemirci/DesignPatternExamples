/*
 * VisitableIfc.h
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#ifndef VISITABLEIFC_H_
#define VISITABLEIFC_H_

#include "VisitorIfc.h"

class VisitableIfc {
public:
	virtual void accept(VisitorIfc *visitor) = 0;
};


#endif /* VISITABLEIFC_H_ */
