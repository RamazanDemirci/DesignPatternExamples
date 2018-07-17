/*
 * CurrentScoreDisplayCls.h
 *
 *  Created on: 14 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CURRENTSCOREDISPLAYCLS_H_
#define CURRENTSCOREDISPLAYCLS_H_

#include "ObserverIfc.h"

class CurrentScoreDisplayCls : public ObserverIfc {
public:
	CurrentScoreDisplayCls();
	virtual ~CurrentScoreDisplayCls();
private:
	int runs;
	int wickets;
	float overs;
public:
	void update(int runs, int wickets, float overs);
	void display();
};

#endif /* CURRENTSCOREDISPLAYCLS_H_ */
