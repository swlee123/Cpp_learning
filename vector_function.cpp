#include<iostream>
#include<vector>

//.insert(myvector.begin()+integer,new value); ==>adds element before specified index number
//.erase(myvector.begin()+int)==>remove elements at specified index
//.clear()==>clear all elements
//.empty()==>if is empty give bool 1,if not give 0



int main()
{
    std::vector<int> my_vector;
    my_vector.push_back(3);
    my_vector.push_back(4);

    std::cout<<"Vector:";

    for(unsigned int i=0;i<my_vector.size();i++)
    {
        std::cout<<my_vector[i]<<" ";

    }

    my_vector.insert(my_vector.begin(),5);

    std::cout<<std::endl<<"Vector:";

    for(unsigned int i=0;i<my_vector.size();i++)
    {
        std::cout<<my_vector[i]<<" ";

    }

    my_vector.clear();

    for(unsigned int i=0;i<my_vector.size();i++)
    {
        std::cout<<my_vector[i]<<" ";

    }

    std::cout<<std::endl<<my_vector.empty();






}