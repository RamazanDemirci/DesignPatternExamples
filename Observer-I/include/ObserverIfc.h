#ifndef __OBSERVER_IFC__
#define __OBSERVER_IFC__

#include <string>

class ObserverIfc
{
public:
	virtual void update(std::string notify) = 0;
};

#endif //__OBSERVER_IFC__
