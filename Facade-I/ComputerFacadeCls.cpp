/*
 * ComputerFacadeCls.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#include "ComputerFacadeCls.h"

ComputerFacadeCls::ComputerFacadeCls() {
	// TODO Auto-generated constructor stub
	this->processor = new CpuCls();
	this->ram = new MemoryCls();
	this->hd = new HardDriveCls();
}

ComputerFacadeCls::~ComputerFacadeCls() {
	// TODO Auto-generated destructor stub
}

void ComputerFacadeCls::start(){
	processor->freeze();
	ram->load(0x3f000000, hd->read(26, 320), 320);
	processor->jump();
	processor->execute();
}

