/*
 * CpuCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef CPUCLS_H_
#define CPUCLS_H_

class CpuCls {
public:
	CpuCls();
	virtual ~CpuCls();
	void freeze();
	void jump();
	void execute();
};

#endif /* CPUCLS_H_ */
