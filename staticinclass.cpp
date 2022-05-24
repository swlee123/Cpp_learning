#include<iostream>

struct entity{

static int x;
int y;

static void print(entity e){
    std::cout<<e.x<<", "<<e.y<<std::endl;
}//use static methid in class must like this 

 //same as

 // void print(){
   // std::cout<<x<<", "<<y<<std::endl;
//}


};

int entity::x;
int main(){

    entity e1;
    e1.x=1;
    e1.y=2;

    entity e2;
    e2.x=4;
    e2.y=5;

    e1.print(e1);
    //noticed that it print 4,2 .e2.x=4 altered the static x into 4
    //static is used when u want data to be share accross all object
    // static method in classes cant access non static variable
    return 0;



}