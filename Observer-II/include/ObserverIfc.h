/*
 * IObserver.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef IOBSERVER_H_
#define IOBSERVER_H_
//#pragma once

namespace Observer {

class SubjectCls;

class ObserverIfc {
public:
	virtual void Update(SubjectCls* subject) = 0;
};

} /* namespace Observer */

#endif /* IOBSERVER_H_ */
