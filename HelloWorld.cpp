#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;


int main(int argc, char** argv)
{
	string str1 = "hello";
	char str2[] = "world";
	printf("%p\n", &str2[0]);
	printf("%c\n", str2[0]);
	printf("%p\n", &str2[1]);
	printf("%c\n", str2[1]);
	printf("%p\n", &str2[2]);
	printf("%c\n", str2[2]);
	string str3;
	getline(cin, str3);
	return 0;
}