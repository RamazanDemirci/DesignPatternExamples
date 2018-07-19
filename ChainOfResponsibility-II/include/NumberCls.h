/*
 * NumberCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef NUMBERCLS_H_
#define NUMBERCLS_H_

class NumberCls {
public:
	NumberCls();
	NumberCls(int number);
	virtual ~NumberCls();
	int getNumber();
private:
	int number;
};

#endif /* NUMBERCLS_H_ */
