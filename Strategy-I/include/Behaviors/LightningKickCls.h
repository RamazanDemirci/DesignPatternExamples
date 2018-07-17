/*
 * LightningKickCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LIGHTNINGKICKCLS_H_
#define LIGHTNINGKICKCLS_H_

#include "KickBehaviorIfc.h"

class LightningKickCls : public KickBehaviorIfc {
public:
	LightningKickCls();
	virtual ~LightningKickCls();
	/*MemberFunctions*/
	void kick();
};

#endif /* LIGHTNINGKICKCLS_H_ */
