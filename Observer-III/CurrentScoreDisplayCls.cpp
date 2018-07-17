/*
 * CurrentScoreDisplayCls.cpp
 *
 *  Created on: 14 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "CurrentScoreDisplayCls.h"

CurrentScoreDisplayCls::CurrentScoreDisplayCls() {
	// TODO Auto-generated constructor stub
	//printf("\n%s", __FUNCTION__);
}

CurrentScoreDisplayCls::~CurrentScoreDisplayCls() {
	// TODO Auto-generated destructor stub
	//printf("\n%s", __FUNCTION__);
}

void CurrentScoreDisplayCls::update(int runs, int wickets, float overs){
	//printf("\n%s", __FUNCTION__);

	this->runs = runs;
	this->wickets = wickets;
	this->overs = overs;
	display();
}
void CurrentScoreDisplayCls::display(){
	//printf("\n%s", __FUNCTION__);

	printf("\nCurrent Score display : \nRuns : %d \nWickets : %d \nOvers : %2f"
			, this->runs
			, this->wickets
			, this->overs);
}
