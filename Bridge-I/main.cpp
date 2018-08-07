/*
 * main.cpp
 *
 *  Created on: 3 Ağu 2018
 *      Author: tr1d5042
 */

/*
 * https://www.codeproject.com/Articles/42762/Bridge-Design-Pattern
 * */

#include "TeacherCls.h"
#include "DirectorCls.h"
#include "KidCls.h"

int main(){
	//create a teacher and a director
	TeacherCls *teacherMegan = new TeacherCls();
	DirectorCls *directorLisa = new DirectorCls();

	KidCls *kidElizabeth = new KidCls();
	kidElizabeth->setName("Elizabeth");
	kidElizabeth->setAge(3);
	kidElizabeth->setFavorFood("Chicken Nuggets");

	KidCls *kidAmmie = new KidCls();
	kidAmmie->setName("Ammie");
	kidAmmie->setAge(4);
	kidAmmie->setFavorFood("French Fries");

	//teacher Megan starts talking with Elizabeth
	printf("\nMiss Megan starts talking to Elizabeth");
	teacherMegan->objectToTalk  = kidElizabeth;
	teacherMegan->startChatting();

	//Director Lisa starts talking with kidAmmie
	printf("\nDirector Lisa starts talking to kidAmmie");
	directorLisa->objectToTalk  = kidAmmie;
	directorLisa->startChatting();

	//Teacher Megan starts talking with kidAmmie
	printf("Miss Megan starts talking to kidAmmie");
	teacherMegan->objectToTalk  = kidAmmie;
	teacherMegan->startChatting();

	//Director directorLisa starts talking with Elizabeth
	printf("Director Lisa starts talking to Elizabeth");
	directorLisa->objectToTalk  = kidElizabeth;
	directorLisa->startChatting();
}

