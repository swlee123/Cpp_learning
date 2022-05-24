#include<iostream>
#include<string>

class Entity
{
public:
    void print()const {std::cout<<"Hello!"<<std::endl;}
};

class scopedptr
{
private:
    Entity*m_obj;
public:
    scopedptr(Entity* entity)
    : m_obj(entity)
    {

    }

    ~scopedptr()
    {
        delete m_obj;
    }

    Entity* operator->(){
        return m_obj;
    }
    //operator overloaded for ->

};



int main()
{
    scopedptr entity = new Entity();
    entity->print();

}