/*
 * AverageScoreDisplayCls.cpp
 *
 *  Created on: 14 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "AverageScoreDisplayCls.h"

AverageScoreDisplayCls::AverageScoreDisplayCls() {
	// TODO Auto-generated constructor stub
	//printf("\n%s", __FUNCTION__);
}

AverageScoreDisplayCls::~AverageScoreDisplayCls() {
	// TODO Auto-generated destructor stub
	//printf("\n%s", __FUNCTION__);
}

void AverageScoreDisplayCls::update(int runs, int wickets, float overs){
	//printf("\n%s", __FUNCTION__);

	this->runRate = (float)runs/overs;
	this->predictedScore = (int)(this->runRate * 50);
	display();
}

void AverageScoreDisplayCls::display(){
	//printf("\n%s", __FUNCTION__);

	printf("\nAvare Score Display : \nRun Rate : %2f, \nPredictedScore : %d"
			, this->runRate
			, this->predictedScore);
}

