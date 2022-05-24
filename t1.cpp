#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    if (system(nullptr))
    {
        cout<<"Command processor exist";


    }
    else 
       cout<<"Command processor doesn't exist";
}