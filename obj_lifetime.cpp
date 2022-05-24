#include<iostream>



class entity
{
public:
   int x;
   entity()
   {
       std::cout<<"Created Entity"<<std::endl;
   }

   ~entity()
   {
       std::cout<<"Destroyed Entity"<<std::endl;
   }



};

int*createarray()
{
    int array[50];//creating on stack
    //int* array=new int[50] like this correct
    return array;//pointer to stack memory
    //memory got cleared after get out of scope,cannot work
}

class scopeptr{
private:
   entity*m_ptr;
public:
   scopeptr(entity* ptr)
   :m_ptr(ptr)
   {

   }
   ~scopeptr()
   {
       delete m_ptr;
   }

};

int main()
{
   // entity e;//call on stack,destroyed after the scope

    entity*e1=new entity();//call on heap,no delete no destroy

    {
        scopeptr e=new entity();//using smart pointer,auto delete heap after the scope;
    }

}
