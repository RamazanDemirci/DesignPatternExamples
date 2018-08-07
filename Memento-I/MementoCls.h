/*
 * MementoCls.h
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef MEMENTOCLS_H_
#define MEMENTOCLS_H_

class NumberCls;

class MementoCls {
public:
	MementoCls();
	virtual ~MementoCls();
	MementoCls(int val);
private:
	friend class NumberCls;
	int state;
};

#endif /* MEMENTOCLS_H_ */
