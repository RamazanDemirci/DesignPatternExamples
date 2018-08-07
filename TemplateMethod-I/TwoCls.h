/*
 * TwoCls.h
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef TWOCLS_H_
#define TWOCLS_H_

#include <iostream>
#include "BaseCls.h"

using namespace std;

class TwoCls : public BaseCls {
public:
	TwoCls();
	virtual ~TwoCls();
	/*virtual*/ void ph1();
	/*virtual*/ void ph2();
};

#endif /* TWOCLS_H_ */
