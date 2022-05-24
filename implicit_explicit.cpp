#include<iostream>

class entity
{
private:
   int age;
   std::string m_name;
public:
   entity(const std::string& name)
     :m_name(name),age(-1){}

   explicit entity(int age)//explicit kw is used if u want your function can be explicitly called only
     :m_name("Unknown"),age(this->age) {}

};

void printentity(const entity& entity)
{

}
int main()
{
    // cannot implicit ready cuz there is explicit kw at the constructo :printentity(22);
    printentity(entity("cherno"));

    entity a("Cherno");
    // entity b=22; wont work cuz this is call by implicit ,there is a explicit keyword
    entity b=entity(22);//explicit form;



}