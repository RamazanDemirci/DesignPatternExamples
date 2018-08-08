/*
 * FighterCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef FIGHTERCLS_H_
#define FIGHTERCLS_H_

#include <string>
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
	float healthScore;
	std::string name;

	/*Member Function*/
	void punch();
	void kick();
	void jump();
	void roll();
	void setKickBehavior(KickBehaviorIfc *kickBehavior);
	void setJumpBehavior(JumpBehaviorIfc *jumpBehavior);
	void descHealthScore(float damage);
	void incHealthScore(float cure);
	virtual void display() = 0;
};

#endif /* FIGHTERCLS_H_ */
