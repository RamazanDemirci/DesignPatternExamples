/*
 * OneCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ONECLS_HX_
#define ONECLS_HX_

#include "RomanInterpreterCls.h"

class OneCls: public RomanInterpreterCls {
public:
	OneCls();
	virtual ~OneCls();
public:
	OneCls(int) :
			RomanInterpreterCls(1) {
	}
protected:
	char one() {
		printf("\n%s", __FUNCTION__);
		return 'I';
	}
	char *four() {
		printf("\n%s", __FUNCTION__);
		return "IV";
	}
	char five() {
		printf("\n%s", __FUNCTION__);
		return 'V';
	}
	char *nine() {
		printf("\n%s", __FUNCTION__);
		return "IX";
	}
	int multiplier() {
		printf("\n%s", __FUNCTION__);
		return 1;
	}
};

#endif /* ONECLS_HX_ */
