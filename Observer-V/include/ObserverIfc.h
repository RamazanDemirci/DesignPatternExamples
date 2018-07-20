/*
 * ObserverIfc.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef OBSERVERIFC_H_
#define OBSERVERIFC_H_

#include <string>

class ObserverIfc {
public:
	virtual void update(std::string) = 0;
	virtual void subscribe() = 0;
	virtual void unsubscribe() = 0;
};


#endif /* OBSERVERIFC_H_ */
