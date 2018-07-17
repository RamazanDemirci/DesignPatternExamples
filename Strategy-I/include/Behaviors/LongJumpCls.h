/*
 * LongJumpCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LONGJUMPCLS_H_
#define LONGJUMPCLS_H_

#include "JumpBehaviorIfc.h"

class LongJumpCls : public JumpBehaviorIfc {
public:
	LongJumpCls();
	virtual ~LongJumpCls();
	/*Member Functions*/
	void jump();
};

#endif /* LONGJUMPCLS_H_ */
