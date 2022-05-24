#include<iostream>

class singleton
{
private:
   static singleton* s_instance;
public:
   static singleton& get(){
       static singleton instance;
       return instance;}

   void Hello(){std::cout<<"hello!";}

};

class GfG
{
public:
    static int i;
      
    GfG()
    {
        // Do nothing
    };
};

singleton* singleton::s_instance = nullptr;

void function()
{
    static int i=0;
    i++;
    std::cout<<i<<std::endl;
}

int GfG::i=1; //cannot declare value inside the main scope
//a static variable inside a class should be initialized explicitly by the user 
//using the class name and scope resolution operator outside the class like this
//scope resolution operator "::"
int main()
{
    singleton::get().Hello();
    GfG obj;
    
    std::cout<<std::endl<<obj.i;




}