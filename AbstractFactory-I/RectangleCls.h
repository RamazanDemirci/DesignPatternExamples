/*
 * RectangleCls.h
 *
 *  Created on: 2 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef RECTANGLECLS_H_
#define RECTANGLECLS_H_

#include "ShapeCls.h"

class RectangleCls : public ShapeCls {
public:
	RectangleCls();
	virtual ~RectangleCls();
	/*virtual*/ void draw();
};

#endif /* RECTANGLECLS_H_ */
