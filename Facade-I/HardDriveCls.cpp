/*
 * HardDriveCls.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "HardDriveCls.h"

HardDriveCls::HardDriveCls() {
	// TODO Auto-generated constructor stub

}

HardDriveCls::~HardDriveCls() {
	// TODO Auto-generated destructor stub
}

char* HardDriveCls::read(long lba, int size){
	printf("\nReading from HardDrive...");
	return "SomeData";
}
