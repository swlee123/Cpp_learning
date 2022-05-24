#include<iostream>

class entity
{
private:
   std::string m_name;
public:
   entity(const std::string& name):m_name(name){}

};
int main()
{
    int*b=new int[50];

    entity*e= new entity("cherno");//this wll allocate new memory for new entity and call the constructor

    entity*e = (entity*)malloc (sizeof(entity));//equivalent as previous one 
    //but this malloc() purely allocate memory but dont call constructor

    delete e;//must delete,delete also cal destructor
    delete[] b;//if allocate using[],must write in delete[]too

}