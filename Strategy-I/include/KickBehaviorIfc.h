/*
 * KickBehavior.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef KICK_BEHAVIOR_IFC_H_
#define KICK_BEHAVIOR_IFC_H_


class KickBehaviorIfc{
public:
	virtual float kick() = 0;
	float damage;
};


#endif /* KICK_BEHAVIOR_IFC_H_ */
