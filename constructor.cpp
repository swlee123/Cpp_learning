#include<iostream>
#include<string>
class ppl{
public:
    std::string name;
    int age;
    int weight;
    ppl(std::string x,int y,int z){
        name=x;
        age=y;
        weight=z;

    }
};
int main(){
    ppl one("Jake",19,55);
    ppl two("Tom",22,65);
    std::cout<<one.name<<std::endl<<one.age<<std::endl;
    std::cout<<two.name<<std::endl<<two.age<<std::endl;



}