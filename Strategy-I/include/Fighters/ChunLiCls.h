/*
 * ChunLiCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CHUNLICLS_H_
#define CHUNLICLS_H_

#include "FighterCls.h"

class ChunLiCls : public FighterCls{
public:
	ChunLiCls();
	virtual ~ChunLiCls();
	ChunLiCls(KickBehaviorIfc *kickBehavior, JumpBehaviorIfc *jumpBehavior);
	/*Member Functions*/
	void display();
};

#endif /* CHUNLICLS_H_ */
