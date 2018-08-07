/*
 * TenCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef TENCLS_HX_
#define TENCLS_HX_

#include "RomanInterpreterCls.h"

class TenCls: public RomanInterpreterCls {
public:
	virtual ~TenCls();
	TenCls(int) :
			RomanInterpreterCls(1) {
	}
protected:
	char one() {
		printf("\n%s", __FUNCTION__);
		return 'X';
	}
	char *four() {
		printf("\n%s", __FUNCTION__);
		return "XL";
	}
	char five() {
		printf("\n%s", __FUNCTION__);
		return 'L';
	}
	char *nine() {
		printf("\n%s", __FUNCTION__);
		return "XC";
	}
	int multiplier() {
		printf("\n%s", __FUNCTION__);
		return 10;
	}
};

#endif /* TENCLS_HX_ */
