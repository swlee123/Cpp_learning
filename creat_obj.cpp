#include<iostream>
#include<string>

using string=std::string;
class entity
{
private:
   string m_name;
public:
   entity():m_name("unknown"){;}
   entity(const string& name) : m_name(name){;}

   const string& getname() const {return m_name;}

};

void function()
{
    int a=2;
    entity e=entity("cherno");

}
int main ()
{
    function();//first:if call a function to init object.when function run ended,the object will be destroy
    entity e=entity("cherno");//second:best way to init a object
    std::cout<<e.getname()<<std::endl;

    entity* e1;
    {
        entity entity("cherno");
        e1=&entity;
        std::cout<<entity.getname()<<std::endl;
    }//allocate on stack,after the curly bracket the entity cherno will vanish,but stack is faster than heap
     //cannot live outside the scope
     //stack is smaller in memory size ~1mb


    {
        entity* e2 = new entity("cherno");//return location of heap where the entity been constructed
        e1=e2;
        std::cout<<(*e2).getname()<<std::endl;
        
    }//allocate on heap,need to manually free the new memory,after the scope still exist after curly brackets

    delete e1;//delete the memory 
    
    }