/*
 * ShapeCls.h
 *
 *  Created on: 2 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef SHAPECLS_H_
#define SHAPECLS_H_

class ShapeCls {
public:
	ShapeCls();
	virtual ~ShapeCls();
	virtual void draw() = 0;
protected:
	int id;
	static int total;
};

#endif /* SHAPECLS_H_ */
