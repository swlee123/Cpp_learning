#include<iostream>
#include<vector>


#define LOG(x) std::cout<<x<<std::endl
#define debug 

int main()
{
    #ifdef debug
    std::cout<<"debug is defined!"<<std::endl;
    #endif
    LOG("HELLO");
    std::cin.get();
}