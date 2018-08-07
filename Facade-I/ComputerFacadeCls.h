/*
 * ComputerFacadeCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef COMPUTERFACADECLS_H_
#define COMPUTERFACADECLS_H_

#include "CpuCls.h"
#include "MemoryCls.h"
#include "HardDriveCls.h"

class ComputerFacadeCls {
public:
	ComputerFacadeCls();
	virtual ~ComputerFacadeCls();
	void start();
private:
	CpuCls *processor;
	MemoryCls *ram;
	HardDriveCls *hd;

};

#endif /* COMPUTERFACADECLS_H_ */
