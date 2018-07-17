#ifndef __SUBJECT_IFC__
#define __SUBJECT_IFC__

#include "ObserverIfc.h"


class SubjectIfc
{
public:
	virtual void registerObserver(ObserverIfc *o) = 0;
	virtual void unregisterObserver(ObserverIfc *o) = 0;
	virtual void notifyObservers() = 0;
};

#endif //__SUBJECT_IFC__
