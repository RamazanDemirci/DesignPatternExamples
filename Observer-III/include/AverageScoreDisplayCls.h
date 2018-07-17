/*
 * AverageScoreDisplayCls.h
 *
 *  Created on: 14 Tem 2018
 *      Author: tr1d5042
 */

#ifndef AVERAGESCOREDISPLAYCLS_H_
#define AVERAGESCOREDISPLAYCLS_H_

#include "ObserverIfc.h"

class AverageScoreDisplayCls : public ObserverIfc {
public:
	AverageScoreDisplayCls();
	virtual ~AverageScoreDisplayCls();
private:
	float runRate;
	int predictedScore;
public:
	void update(int runs, int wickets, float overs);
	void display();

};

#endif /* AVERAGESCOREDISPLAYCLS_H_ */
