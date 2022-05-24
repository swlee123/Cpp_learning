#include<iostream>


class Entity
{
private:
   int*m_x;
   int m_y;

public:
   const int* const getx() const
   {
       return m_x;

   }//third const means this method is not going to modify any member of class,make sense with getter
    // first const= pointer(address) cannot be modified , second const =content of address cant be modified

    int gety() const
    //remember to mark method to const if it dont modified the class,
    //then this can pass to void printentity(const entity&)
    //the function need to assure tht e.gety() wont modified the class then can use,so we have two versions of gety()
    {
        return m_y;
    }

    int gety()
    {
        return m_y;
    }

   void setx(int x)
   {
       *m_x = x;
   }
 
};

void printentity(const Entity& e)
{
    std::cout<<e.gety()<<std::endl;
}
int main(){

    const int MAX_AGE=90;

    //const int*a= new int;//same as int const*a=new int,like this cannot reassign the pointer's address's content

    int*const a=new int;//like this cannot reassign its address


    *a=2;
    // try uncomment this u can see ->a=(int*)&MAX_AGE;
    std::cout<<*a<<std::endl;

    std::cin.get();


    int abc=10;
    int efg=30;
    const int& a=abc;
    int const& b=abc;

    int& const c=abc; //like this wont get const int& but get int&
    c=efg;

  


}



void str()
{
    const char* name="Cherno";
    const wchar_t* name2=L"Cherno";
    const char16_t* name3=u"Cherno";//2 byte, for UTF16
    const char32_t* name4=U"Cherno";//4 byte,for UTF32
}