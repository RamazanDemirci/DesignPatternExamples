/*
 * CommentaryObjectCls.cpp
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include "CommentaryObjectCls.h"

CommentaryObjectCls::CommentaryObjectCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

CommentaryObjectCls::CommentaryObjectCls(std::string subjectDetail){
	this->subjectDetail = subjectDetail;
//	printf("\n%s", __FUNCTION__);
}

CommentaryObjectCls::~CommentaryObjectCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void CommentaryObjectCls::subscribeObserver(ObserverIfc *observer){
	//printf("\n%s", __FUNCTION__);
	this->observerList.push_back(observer);
}

void CommentaryObjectCls::unsubscribeObserver(ObserverIfc *observer){
//	printf("\n%s", __FUNCTION__);
	observerList.erase(std::remove(observerList.begin(), observerList.end(), observer), observerList.end());
}

void CommentaryObjectCls::notifyObservers(){
//	printf("\n%s", __FUNCTION__);
	std::for_each(observerList.begin(), observerList.end(), [=](ObserverIfc *item){

		item->update(this->desc);
	});
}

std::string CommentaryObjectCls::subjectDetails(){
//	printf("\n%s", __FUNCTION__);
	return this->subjectDetail;
}

void CommentaryObjectCls::setDesc(std::string desc){
//	printf("\n%s", __FUNCTION__);
	this->desc = desc;
	notifyObservers();
}
