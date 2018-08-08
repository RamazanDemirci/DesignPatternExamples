/*
 * TornadoKickCls.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef TORNADOKICKCLS_H_
#define TORNADOKICKCLS_H_

#include "KickBehaviorIfc.h"

class TornadoKickCls : public KickBehaviorIfc {
	typedef KickBehaviorIfc base;
public:
	TornadoKickCls();
	virtual ~TornadoKickCls();
	/*Member Functions*/
	float kick();
};

#endif /* TORNADOKICKCLS_H_ */
