#include<iostream>
#include<algorithm>
//need this for sort
#include<string>
#include<vector>
#include<functional>

int main()
{
    std::vector<int> values={3,5,1,4,2};
    std::sort(values.begin(),values.end());
    //by default sort it by ascending numeritic order

    for(int value:values)
    {
        std::cout<<value<<std::endl;
    }

     std::sort(values.begin(),values.end(),std::greater<int>());//add comparator 

     for(int value:values)
    {
        std::cout<<value<<std::endl;
    }





}