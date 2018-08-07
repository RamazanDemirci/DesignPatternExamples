/*
 * main.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

/*
 * https://www.codeproject.com/Articles/185798/Decorator-Design-Pattern-2
 * */

#include "PlainIceCreamCls.h"
#include "CandyToppingCls.h"
#include "PeanutToppingCls.h"
#include "NutsToppingCls.h"

int main(){
	ComponentIfc *a = new PlainIceCreamCls();
	ComponentIfc *b = new CandyToppingCls(a);
	ComponentIfc *c = new PeanutToppingCls(b);
	ComponentIfc *d = new NutsToppingCls(c);
	d->addTopping();
}

