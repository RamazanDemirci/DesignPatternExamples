/*
 * main.cpp
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include "ShortJumpCls.h"
#include "LongJumpCls.h"
#include "LightningKickCls.h"
#include "TornadoKickCls.h"
#include "KenCls.h"

int main()
{
	//let us make some behaviors first
	JumpBehaviorIfc *shortJump = new ShortJumpCls();
	JumpBehaviorIfc *longJump = new LongJumpCls();
	KickBehaviorIfc *tornadoKick = new TornadoKickCls();

	//Make a fighter with desired behaviors
	FighterCls *ken = new KenCls(tornadoKick, shortJump);
	ken->display();

	//Test behaviors
	ken->punch();
	ken->kick();
	ken->punch();
	ken->jump();
	ken->punch();
	ken->jump();
	ken->punch();
	ken->kick();
	ken->punch();

	//Change behavior dynamically(algorithms are interchangeable)
	ken->setJumpBehavior(longJump);
	ken->jump();
}


