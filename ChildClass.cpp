#include "ChildClass.h"

/******************* Child Constructor Definition**************************/
ChildClass::ChildClass()
{

}

/******************* Child Destructor Definition**************************/
ChildClass::~ChildClass()
{

}

/******************* Child Setter Definition**************************/
void ChildClass::setZ(int num)
{
	zNum = num;
}

/******************* Child Getter Definition**************************/
void ChildClass::getChildInfo()
{
	cout << "zNum : " << zNum << endl;
}

int ChildClass::getZ()
{
	return zNum;
}

/******************* Parnet Getter Polymorphism **************************/
void ChildClass::getParentInfo()
{
	cout << "this is called from child class" << endl;
}
