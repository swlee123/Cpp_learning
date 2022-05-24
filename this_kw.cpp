#include<iostream>

void printentity(entity*e);

class entity
{

public:
   int x,y;
   entity()
   {
       entity*e=this;
       this->x=x;
       this->y=y;

       //this keyword is a pointer to currant class instance
       //can use when local variable and object member have same name

       printentity(this);//can use to pass entity object to function outside the class
   }

   int getx() const{

   }
};

void printentity(entity *e){

    //printing stuff
}

int main()
{

}