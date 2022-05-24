#include<iostream>
#include<vector>
#include<map>
//included in modern cpp
//Syntax::
//for ( range_declaration : range_expression ) 
//   loop_statement

int main()
{
    std::vector<int> v={0,1,2,3,4,5};
    for(auto i:v)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";


    for(int n:{1,2,3,4,5})//can also be braced init list
     std::cout<<n<<" ";
     std::cout<<std::endl;

     //print string
     std::string str="Fudan";
     for(const char c:str)
     {
         std::cout<<c<<" ";
     }
     std::cout<<"\n";


    
    for(auto&& i:v)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    //this seems like same but more efficient 
    //as it accesses the element instead of making copy

    std::vector <int> x={1,2,3,4};
    for(int& j:x)
    std::cout<<j<<" "; 
    //same pass by reference more efficient 
}



