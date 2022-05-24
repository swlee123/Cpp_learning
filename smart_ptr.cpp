#include<iostream>
#include<string>
#include<memory>

//help u call new and delete

//std::unique_ptr, std::shared_ptr, std::weak_ptr

class entity
{
public:
   entity(){
       std::cout<<"Created Entity"<<std::endl;
     
   }

   ~entity(){
      
       std::cout<<"Destroyed Entity"<<std::endl;
   }

   void print(){}
};
int main()
{
    {
        std::unique_ptr<entity> e(new entity() );
        std::unique_ptr<entity> e1=std::make_unique<entity>(); //reception safety
        //two ways to call smart ptr
        e->print();
    }


    {
        std::shared_ptr<entity> e0;
        {
             std::shared_ptr<entity> sharedEntity = std::make_shared<entity>();
             std::weak_ptr<entity> weakentity = sharedEntity;
             e0=sharedEntity;

        }
    }

}