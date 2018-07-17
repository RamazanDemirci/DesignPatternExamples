/*
 * FighterCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef FIGHTERCLS_H_
#define FIGHTERCLS_H_

#include "KickBehaviorIfc.h"
#include "JumpBehaviorIfc.h"

class FighterCls {
public:
	FighterCls();
	virtual ~FighterCls();
	FighterCls(KickBehaviorIfc *kickBehavior, JumpBehaviorIfc *jumpBehavior);

public:
	/*Attributes*/
	KickBehaviorIfc *kickBehavior;
	JumpBehaviorIfc *jumpBehavior;

	/*Member Function*/
	void punch();
	void kick();
	void jump();
	void roll();
	void setKickBehavior(KickBehaviorIfc *kickBehavior);
	void setJumpBehavior(JumpBehaviorIfc *jumpBehavior);
	virtual void display() = 0;
};

#endif /* FIGHTERCLS_H_ */
