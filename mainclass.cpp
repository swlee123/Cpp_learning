#include<iostream>
#include<string>

using namespace std;

class person{

private:
   string name;
   int age;
   
public:

   person()
   :name("NA"),age(0){
       
  }//default constructor

  person(string name){
      this->name=name;                                               
  }

   person(string name,int age){
       this->name=name;
       this->age=age;
   }

   ~person(){
    cout<<"Destructor Called!"<<"\n";

  }//destructor

  //Accessors(getters)
  const string& getName()const {return this->name;}
  const int& getAge()const {return this->age;}

  //Modifier(Setters)
  void setName(const string name)
  {
      this->name = name;

  }

  void setAge(const int age)
  {
      this->age = age;

  }

  //Function
  const string toString() const{
      return "Name: "+this->name + " Age: " + to_string(this->age);
  }

};

int main(){
    person person1("Ali",15);
    
    cout<<"myperson: "<<person1.toString()<<"\n";

    
   

    return 0;

}