/*
 * main.cpp
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include <random>
#include <vector>
#include <time.h>
#include "ShortJumpCls.h"
#include "LongJumpCls.h"
#include "LightningKickCls.h"
#include "TornadoKickCls.h"
#include "KenCls.h"
#include "ChunLiCls.h"
#include "RyuCls.h"

using namespace std;

typedef enum {
	  START
	, PAUSE
	, FINISH
} StateEnum;

void action(vector<FighterCls*> fighterList) {
	auto index = rand() % 2;
	auto attacker = fighterList.at(index);
	auto defender = fighterList.at((index+1)%2);

	switch (rand() % 4) {
		case 0:
			attacker->jump();
			break;
		case 1:
			attacker->kick();
			attacker->display();
			defender->display();
			break;
		case 2:
			attacker->punch();
			attacker->display();
			defender->display();
			break;
		case 3:
			attacker->roll();
			attacker->display();
			defender->display();
			break;
		default:
			break;
	}
}

int main()
{
	vector<FighterCls*> fighterList;

	srand(time(NULL));

	//let us make some behaviors first
	JumpBehaviorIfc *shortJump = new ShortJumpCls();
	JumpBehaviorIfc *longJump = new LongJumpCls();
	KickBehaviorIfc *tornadoKick = new TornadoKickCls();
	KickBehaviorIfc *lightningKick = new LightningKickCls();

	//Make a fighter with desired behaviors

	fighterList.push_back(new KenCls(lightningKick, shortJump));
	fighterList.push_back(new ChunLiCls(tornadoKick, longJump));

	StateEnum status = StateEnum::START;

	std::string winner = "";
	std::string loser = "";


	while(status != StateEnum::FINISH) {
		if(status == StateEnum::PAUSE) {
			printf(".");
		} else {
			action(fighterList);
		}

		for(int i = 0; i < fighterList.size(); i++){
			FighterCls *item = fighterList.at(i);
			if(item->healthScore == 0) {
				loser = item->name;
				winner = fighterList.at((i+1)%2)->name;
				status = StateEnum::FINISH;
			}
			else if(item->healthScore == 18){
				//Change behavior dynamically(algorithms are interchangeable)
				item->setJumpBehavior(longJump);
			}
		}
	}
	printf("\nFIGHT FINISH!");

	printf("\n\nWINNER : %s \nLOSER : %s"
			, winner.c_str()
			, loser.c_str());
}


