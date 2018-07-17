/*
 * Takipci.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef TAKIPCI_H_
#define TAKIPCI_H_

class SporHaberi;

class Takipci {
public:
	virtual void update(SporHaberi *sporHaberi) = 0;
};

#endif /* TAKIPCI_H_ */s
