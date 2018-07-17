/*
 * KenCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef KENCLS_H_
#define KENCLS_H_

#include "FighterCls.h"

class KenCls : public FighterCls {
public:
	KenCls();
	virtual ~KenCls();
	KenCls(KickBehaviorIfc *kickBehavior, JumpBehaviorIfc *jumpBehavior);
	/*Member Functions*/
	void display();
};

#endif /* KENCLS_H_ */
