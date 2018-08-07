/*
 * BaseCls.h
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef BASECLS_H_
#define BASECLS_H_

#include <iostream>

using namespace std;

class BaseCls {
public:
	BaseCls();
	virtual ~BaseCls();
	// 1. Standardize the skeleton of an algorithm in a base class "template method"
	virtual void execute() {
		printf("\n%s", __FUNCTION__);
		a();
		ph1();
		c();
		ph2();
		e();
	}
private:
	void a();
	void c();
	void e();
	// 2. Steps requiring peculiar implementations are "placeholders" in base class
	virtual void ph1() = 0;
	virtual void ph2() = 0;
};

#endif /* BASECLS_H_ */
