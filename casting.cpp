#include<iostream>
class Base
{
public:
   Base(){}
   virtual ~Base(){}

};
class Derived:public Base{
public:
   Derived(){
   }
   ~Derived(){}

};

class AnotherClass :public Base
{
public:
   AnotherClass(){}
   ~AnotherClass(){}
};

int main()
{
    int a=5;
    double value=a; 
    //implicit conversion of int to double
    //Some of these conversions may imply a loss of precision,
    // which the compiler can signal with a warning. This warning can be avoided with an explicit conversion.

    double val=(double)a;//c-style casting (type of casting)variable

    // dynamic_cast, reinterpret_cast, static_cast and const_cast.
    //ok we will come back later when we need to use it(probably after a long time XD)
    
    Derived* derived=new Derived();
    Base* base =derived;
    Derived* ac= dynamic_cast<Derived*>(base);





}