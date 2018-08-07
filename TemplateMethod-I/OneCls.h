/*
 * OneCls.h
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef ONECLS_H_
#define ONECLS_H_

#include <iostream>
#include "BaseCls.h"

using namespace std;

class OneCls : public BaseCls {
public:
	OneCls();
	virtual ~OneCls();
	// 3. Derived classes implement placeholder methods
	/*virtual*/ void ph1();
	/*virtual*/ void ph2();
};

#endif /* ONECLS_H_ */
