#include<iostream>

//Uses of the lvalue references: 

// lvalue references can be used to alias an existing object.
// They can also be used to implement pass-by-reference semantics.

//Uses of rvalue references: 

//They are used in working with the move constructor and move assignment.
//cannot bind non-const lvalue reference of type ‘int&‘ to an rvalue of type ‘int’.
//cannot bind rvalue references of type ‘int&&‘ to lvalue of type ‘int’.

//illustrate rvalue

using namespace std;

void printvalue(int&& x)
{
    cout<<x<<endl;
}

int main()
{
    int a{10};

    printvalue(100);//cannot put a must be a rvalue cuz it accept rvalue ref

}