#pragma once
#include <iostream>

using namespace std;

class ParentClass
{
private:
	int xNum;
	int yNum;
	
public:
/******************* Parent Constructor Declaration **************************/
	ParentClass();

/******************* Parent Destructor Declaration **************************/
	~ParentClass();

/******************* Parent Setter Declaration **************************/
	void setX(int num);
	void setY(int num);

/******************* Parent Getter Declaration **************************/
	void getParentInfo();
	int getX();
	int getY();
};

