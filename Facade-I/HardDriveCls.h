/*
 * HardDriveCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef HARDDRIVECLS_H_
#define HARDDRIVECLS_H_

class HardDriveCls {
public:
	HardDriveCls();
	virtual ~HardDriveCls();
	char* read(long lba, int size);
};

#endif /* HARDDRIVECLS_H_ */
