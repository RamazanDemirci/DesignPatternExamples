/*
 * RyuCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef RYUCLS_H_
#define RYUCLS_H_

#include "FighterCls.h"

class RyuCls : public FighterCls {
public:
	RyuCls();
	virtual ~RyuCls();
	RyuCls(KickBehaviorIfc *kickBehavior, JumpBehaviorIfc *jumpBehavior);
	/*Member Functions*/
	void display();
};

#endif /* RYUCLS_H_ */
