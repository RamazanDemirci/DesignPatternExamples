/*
 * StackCls.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include "StackCls.h"

StackCls::StackCls()
: sp(-1){
	// TODO Auto-generated constructor stub

}

StackCls::~StackCls() {
	// TODO Auto-generated destructor stub
}

void StackCls::push(int in)
{
	items[++sp] = in;
}

int StackCls::pop()
{
	return items[sp--];
}
bool StackCls::isEmpty()
{
	return (sp == - 1);
}
