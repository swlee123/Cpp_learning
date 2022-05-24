//A form of pointer aliasing where two pointers and refer to the same location in memory but represent that 
//location as different types. The compiler will treat both "puns" as unrelated pointers.
// Type punning has the potential to cause dependency problems for any data accessed through both pointers.


#include<iostream>

struct entity
{
    int x,y;

    int*getposition()
    {
        return &x;
    }

};

int main()
{
    int b=50;

    double& value = *(double*)&b; //double type data referencing to int a

    entity a={5,8};

    int* position=(int*)&a; //point to the address of entity a like array

    int y=*(int*)((char*)&a+4); //pointer to a convert to char pointer and 4 byte memory location ,convert to int pointer and dereference

    std::cout<<y<<std::endl;

    std::cout<<position[0]<<", "<<position[1]<<std::endl;

    std::cout<<value<<std::endl;

    position[0]=2;//choosing different way to intepret that memory

    position= a.getposition();

    std::cout<<position[0]<<std::endl;

}