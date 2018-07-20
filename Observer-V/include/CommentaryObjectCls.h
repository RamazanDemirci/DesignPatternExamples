/*
 * CommentaryObjectCls.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COMMENTARYOBJECTCLS_H_
#define COMMENTARYOBJECTCLS_H_

#include <vector>
#include "SubjectIfc.h"
#include "CommentaryIfc.h"
#include "ObserverIfc.h"

class CommentaryObjectCls  : public SubjectIfc, public CommentaryIfc{
public:
	CommentaryObjectCls();
	CommentaryObjectCls(std::string subjectDetails);
	virtual ~CommentaryObjectCls();
	void subscribeObserver(ObserverIfc *observer);
	void unsubscribeObserver(ObserverIfc *observer);
	void notifyObservers();
	std::string subjectDetails();
	void setDesc(std::string desc);
private:
	std::vector<ObserverIfc*> observerList;
	std::string subjectDetail;
	std::string desc;
};

#endif /* COMMENTARYOBJECTCLS_H_ */
