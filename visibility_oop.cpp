#include<iostream>
using namespace std;
class entity
{
 protected:
    int x,y;
public:
    int z;

};

class player:public entity//if protected cant access z
{
public:
player()
{
    x=2;
}
};

int main()
{
    player p1;
    cout<<p1.z;


}
//public:could be access anywhere
//private:can only be access at the class
//protected:can be access by subclasses

//if we derive a subclass from a private base claa,then both public member and protected member of base class will become private in the derived class
//if we derive a subclass from a protected base class.then both public member and protected member of base class will become protected in the derived class
//if we derive a subclass from a public base class , then public of base class will become public ,other remain the same