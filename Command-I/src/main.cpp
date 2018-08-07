/*
 * main.cpp
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#include "RemoteControlWithUndoCls.h"
#include "LightCls.h"
#include "LightOnCommandCls.h"
#include "LightOffCommandCls.h"
#include "CeilingFanCls.h"
#include "CeilingFanHighCommandCls.h"
#include "CeilingFanLowCommandCls.h"
#include "CeilingFanMediumCommandCls.h"
#include "CeilingFanOffCommandCls.h"
#include "DimmerLightOnCommandCls.h"
#include "DimmerLightOffCommandCls.h"

int main(){
	RemoteControlWithUndoCls *remoteControl = new RemoteControlWithUndoCls();

	LightCls *livingRoomLight = new LightCls("Living Room");

	LightOnCommandCls *livingRoomLightOn =
			new LightOnCommandCls(livingRoomLight);
	LightOffCommandCls *livingRoomLightOff =
			new LightOffCommandCls(livingRoomLight);

	remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
//	printf("\n%s", remoteControl->toString());
	remoteControl->undoButtonWasPushed();
	remoteControl->offButtonWasPushed(0);
	remoteControl->onButtonWasPushed(0);
//	printf("\n%s", remoteControl->toString());
	remoteControl->undoButtonWasPushed();

	CeilingFanCls *ceilingFan = new CeilingFanCls("Living Room");

	CeilingFanMediumCommandCls *ceilingFanMedium =
			new CeilingFanMediumCommandCls(ceilingFan);
	CeilingFanHighCommandCls *ceilingFanHigh =
			new CeilingFanHighCommandCls(ceilingFan);
	CeilingFanOffCommandCls *ceilingFanOff =
			new CeilingFanOffCommandCls(ceilingFan);

	remoteControl->setCommand(0, ceilingFanMedium, ceilingFanOff);
	remoteControl->setCommand(1, ceilingFanHigh, ceilingFanOff);

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);
//	printf("\n%s", remoteControl->toString());
	remoteControl->undoButtonWasPushed();

	remoteControl->onButtonWasPushed(1);
//	printf("\n%s", remoteControl->toString());
	remoteControl->undoButtonWasPushed();
}

