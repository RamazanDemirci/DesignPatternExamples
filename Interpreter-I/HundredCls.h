/*
 * HundredCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef HUNDREDCLS_HX_
#define HUNDREDCLS_HX_

#include "RomanInterpreterCls.h"

class HundredCls: public RomanInterpreterCls {
public:
	HundredCls();
	virtual ~HundredCls();
public:
	HundredCls(int) :
			RomanInterpreterCls(1) {
	}
protected:
	char one() {
		printf("\n%s", __FUNCTION__);
		return 'C';
	}
	char *four() {
		printf("\n%s", __FUNCTION__);
		return "CD";
	}
	char five() {
		printf("\n%s", __FUNCTION__);
		return 'D';
	}
	char *nine() {
		printf("\n%s", __FUNCTION__);
		return "CM";
	}
	int multiplier() {
		printf("\n%s", __FUNCTION__);
		return 100;
	}
};

#endif /* HUNDREDCLS_HX_ */
