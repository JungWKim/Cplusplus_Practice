#include "main.h"

class BankAccount
{
private:
	string a_name;
	int a_no;

public:
	BankAccount() {
		cout << "----- Consturcot ------" << endl;
	}
	BankAccount(string s, int n)
	{
		cout << "----- Consturcot ------" << endl;
		a_name = s;
		a_no = n;
	}

	void setName(string s) { a_name = s; }
	void setNo(int n) { a_no = n; }

	string getName() { return a_name; }
	int getNo() { return a_no; }
};

class CallClass
{
private:
	int x;
public:
	virtual void call() {
		cout << "call~~" << endl;
	}
};

class BellClass : public CallClass
{
private:
	int y;
public:
	void call()
	{
		y = 1;
		cout << y << endl;
		cout << "bell~~" << endl;
	}
};

int main(int argc, char** argv)
{
//	ChildClass childClass;
//	childClass.setX(100);
//	childClass.setY(200);
//	childClass.setZ(300);
//
//	ParentClass parentClass;
//	parentClass.setX(1);
//	parentClass.setY(2);
//
//	childClass.getChildInfo();
//	parentClass.getParentInfo();
//	childClass.ParentClass::getParentInfo();
//	childClass.getParentInfo();
//
//	char(*arr)[3];
//	char tmp1[3] = {'a', 'b', 'c'};
//	arr = &tmp1;
//	printf("&tmp1 : %p\n", &tmp1);
//	printf("tmp1 address : %p\n", tmp1);
//	printf("tmp1[0] address : %p\n", &tmp1[0]);
//
//	printf("&arr address : %p\n", &arr);
//	printf("arr address : %p\n", arr);
//	printf("arr[0] address : %p\n", &arr[0]);
//	printf("arr[1] address : %p\n", &arr[1]);
//
//	ChildClass* ptr = nullptr;
//	ptr = new  ChildClass;
//	ptr->setX(10);
//	cout << "ptr X : " << ptr->getX() << endl;

	CallClass* call = new BellClass;
	call->call();

	vector<BankAccount> bankAccounts(3);
	cout << "bank accoutns size : " << bankAccounts.size() << endl;
	string name[3] = {"¹ÚÂùÈ£", "ÀÌ½Â¿±", "·ùÇöÁø"};

	for (int i =0 ; i< 3; i++)
	{
		bankAccounts[i].setName(name[i]);
		bankAccounts[i].setNo(i + 1);
	}

	BankAccount ac;
	bankAccounts.push_back(ac);
	cout << "bank accoutns size : " << bankAccounts.size() << endl;

	bankAccounts.pop_back();
	cout << "bank accoutns size : " << bankAccounts.size() << endl;

	vector<BankAccount>::iterator iter;
	iter = bankAccounts.begin();
	bankAccounts.erase(iter+1);
	bankAccounts.erase(iter+1);
	bankAccounts.erase(iter);
	cout << "bank accoutns size : " << bankAccounts.size() << endl;
}