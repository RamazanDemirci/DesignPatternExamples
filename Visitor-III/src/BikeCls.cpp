/*
 * BikeCls.cpp
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include "BikeCls.h"

BikeCls::BikeCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

BikeCls::~BikeCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void BikeCls::accept(VisitorIfc *visitor){
//	printf("\n%s", __FUNCTION__);
	visitor->visit(this);
	std::for_each(bikeParts.begin(), bikeParts.end(), [&](VisitableIfc *part){
		part->accept(visitor);
	});
}

void BikeCls::addBikePart(VisitableIfc *part){
//	printf("\n%s", __FUNCTION__);
	this->bikeParts.push_back(part);
}
