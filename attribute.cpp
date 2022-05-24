#include <bits/stdc++.h>
using namespace std;
	
void func1();
void func2();

void __attribute__((constructor)) func1(); //attribute constuctor power to func1
void __attribute__((constructor)) func3();
void __attribute__((destructor)) func2();//attribute destructor power to func2

void func1()
{
	cout << "Inside func1()\n";
}

void func3()
{
    cout<< "Inside func3()\n";
}

void func2()
{
	cout << "Inside func2()\n";
}

int main()
{
	void func1();
	void func2();
	cout << "Inside main()\n";

	return 0;
}

//gcc dont support #pragma starup of #pragma exit
