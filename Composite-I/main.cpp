/*
 * main.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

/*
 * https://www.codeproject.com/Articles/185797/Composite-Design-Pattern
 * */

#include "WorkerCls.h"
#include "SupervisorCls.h"

int main(){
	WorkerCls *a = new WorkerCls("Worker 'Tom'", 5);
	SupervisorCls *b = new SupervisorCls("Supervisor 'Mary'", 6);
	SupervisorCls *c = new SupervisorCls("Supervisor 'Jerry'", 7);
	SupervisorCls *d = new SupervisorCls("Supervisor 'Bob'", 9);
	WorkerCls *e = new WorkerCls("Worker 'Jimmy'", 8);

	//set up the relationships
	b->addSubordinate(a); //Tom works for Mary
	c->addSubordinate(b); //Mary works for Jerry
	c->addSubordinate(d); //Bob works for Jerry
	d->addSubordinate(e); //Jimmy works for Bob

	//Jerry shows his happiness and asks everyone else to do the same

	printf("\n\n################...A...###################");
	a->showHappiness();
	printf("\n\n################...B...###################");
	b->showHappiness();
	printf("\n\n################...C...###################");
	c->showHappiness();
	printf("\n\n################...D...###################");
	d->showHappiness();
	printf("\n\n################...E...###################");
	e->showHappiness();
}
