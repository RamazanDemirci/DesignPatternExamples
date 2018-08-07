/*
 * StackIteratorCls.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include "StackIteratorCls.h"

StackIteratorCls::StackIteratorCls() {
	// TODO Auto-generated constructor stub

}

StackIteratorCls::~StackIteratorCls() {
	// TODO Auto-generated destructor stub
}

StackIteratorCls::StackIteratorCls(const StackCls *s)
{
	stk = s;
}
void StackIteratorCls::first()
{
	index = 0;
}
void StackIteratorCls::next()
{
	index++;
}
bool StackIteratorCls::isDone()
{
	return (index == (stk->sp + 1) );
}
int StackIteratorCls::currentItem()
{
	return stk->items[index];
}




