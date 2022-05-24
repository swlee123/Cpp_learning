//Deleting a derived class object using a pointer of base class type that has a non-virtual destructor 
//results in undefined behavior. To correct this situation, the base class should be defined with a virtual destructor.

#include<iostream>

class Base
{
public: 
    Base(){std::cout<<"Base Constructor\n";}
    virtual ~Base(){std::cout<<"Base Destructor\n";}

    // Making base class destructor virtual guarantees that the object of derived class is destructed properly, 
    // i.e., both base class and derived class destructors are called.  

};

class Derived :public Base
{
public:
    Derived(){ m_Array = new int[5]; std::cout<<"Derived Constructor\n";}
    ~Derived(){delete[] m_Array; std::cout<<"Derived destructor\n";}

private:
   int* m_Array;

};


int main()
{
    Base* base=new Base();
    delete base;
    std::cout<<"------------------\n";
    Derived*derived = new Derived();
    delete derived;
    std::cout<<"------------------\n";
    Base*poly = new Derived();
    delete poly;
    //this will cause memory leakage

    std::cin.get();
}