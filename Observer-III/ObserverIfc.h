#ifndef __OBSERVER_IFC__
#define __OBSERVER_IFC__


class ObserverIfc
{
public:
	virtual void update(int runs, int wickets, float overs) = 0;
};

#endif //__OBSERVER_IFC__
