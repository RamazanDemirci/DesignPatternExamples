/*
 * ShortJumpCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SHORTJUMPCLS_H_
#define SHORTJUMPCLS_H_

#include "JumpBehaviorIfc.h"

class ShortJumpCls : public JumpBehaviorIfc {
public:
	ShortJumpCls();
	virtual ~ShortJumpCls();
	/*Member Functions*/
	void jump();
};

#endif /* SHORTJUMPCLS_H_ */
