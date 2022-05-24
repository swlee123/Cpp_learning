#include<iostream>
//function pointers are a way to assign function to a variable


void helloworld()
{
    std::cout<<"Hello World"<<std::endl;
}

void h1(int a)
{
    std::cout<<"Hello World"<<a<<std::endl;
}

int main(){

    typedef void(*HelloWorldFunction)();

    typedef void(*H1Function)(int);//declaring function pointer with int
    H1Function f2=h1;

    f2(3);



    void(*func)(); //function pointer named "function" declared

    auto function = &helloworld;
    HelloWorldFunction f1 = helloworld;
    //getting pointer(memory address) of the function
    //same as   :: auto function = helloworld;

    function();
    function();



}