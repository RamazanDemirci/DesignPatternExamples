/*
 * MemoryCls.h
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef MEMORYCLS_H_
#define MEMORYCLS_H_

class MemoryCls {
public:
	MemoryCls();
	virtual ~MemoryCls();
	void load(long position, char* data, int dataSize);
};

#endif /* MEMORYCLS_H_ */
