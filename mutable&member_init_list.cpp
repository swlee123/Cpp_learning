#include<iostream>

class entity
{
private:
   std::string m_name;
   mutable int m_debugcount=0;
   int m_score;
public:

   entity()
   :m_score(0),m_name("unknown") //this is member init list,have to always used,if no use waste preformance
   {
   }
   entity(const std::string& name)
   :m_name(name)//same as m_name=name inside function
   {
   }
   const std::string& getname()const
   {
       m_debugcount++;
       return m_name;
       //althought this method is const which cannot modify the member, the mutable keyword makes debugcout can be change
   }



};

int main()
{
    const entity e;
    e.getname();


}