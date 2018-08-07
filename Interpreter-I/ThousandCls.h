/*
 * ThousandCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef THOUSANDCLS_HX_
#define THOUSANDCLS_HX_

#include "RomanInterpreterCls.h"

class ThousandCls: public RomanInterpreterCls {
public:
	ThousandCls();
	virtual ~ThousandCls();
	// provide 1-arg ctor to avoid infinite loop in base class ctor
	ThousandCls(int) :
			RomanInterpreterCls(1) {
	}

protected:
	char one() {
		printf("\n%s", __FUNCTION__);
		return 'M';
	}
	char *four() {
		printf("\n%s", __FUNCTION__);
		return "";
	}
	char five() {
		printf("\n%s", __FUNCTION__);
		return '\0';
	}
	char *nine() {
		printf("\n%s", __FUNCTION__);
		return "";
	}
	int multiplier() {
		printf("\n%s", __FUNCTION__);
		return 1000;
	}
};

#endif /* THOUSANDCLS_HX_ */
