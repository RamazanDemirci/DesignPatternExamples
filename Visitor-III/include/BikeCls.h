/*
 * BikeCls.h
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#ifndef BIKECLS_H_
#define BIKECLS_H_

#include <vector>
#include "VisitableIfc.h"

class BikeCls : public VisitableIfc {
public:
	BikeCls();
	virtual ~BikeCls();
	void accept(VisitorIfc *visitor);
	void addBikePart(VisitableIfc *part);
private:
	std::vector<VisitableIfc*> bikeParts;

};

#endif /* BIKECLS_H_ */
