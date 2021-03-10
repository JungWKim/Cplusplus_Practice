#pragma once
#include "ParentClass.h"

#ifndef __ChildClass_H
#define __ChildClass_H
#endif

class ChildClass : public ParentClass
{
private:
	int zNum;

public:
/******************* Child Constructor Declaration **************************/
	ChildClass();
	
/******************* Child Constructor Declaration **************************/
	~ChildClass();

/******************* Child Setter Declaration **************************/
	void setZ(int num);
	
/******************* Child Getter Declaration **************************/
	void getChildInfo();
	void getParentInfo();
	int getZ();
};

