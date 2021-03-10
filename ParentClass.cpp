#include "ParentClass.h"

/******************* Parent Constructor Definition**************************/
ParentClass::ParentClass()
{

}

/******************* Child Destructor Definition**************************/
ParentClass::~ParentClass()
{

}

/******************* Parent Setter Definition**************************/
void ParentClass::setX(int num)
{
	xNum = num;
}
void ParentClass::setY(int num)
{
	yNum = num;
}

/******************* Parent Getter Definition**************************/
void ParentClass::getParentInfo()
{
	cout << "xNum : " << xNum << endl;
	cout << "yNum : " << yNum << endl;
}
int ParentClass::getX()
{
	return xNum;
}
int ParentClass::getY()
{
	return yNum;
}
