//STL's (Stephan T. Lavavej) explanation, if you can get its address, its an lvalue, otherwise its an rvalue. 


//lvalue has two components 1) value 2) address
//rvalue has only 1) value

//An identifier is a modifiable lvalue if it refers to a memory location and if its type is arithmetic, structure, union, or pointer.


#include<iostream>

int& getvalue()
{
    static int value =10;
    return value;
}

void setvalue(int& value)
{
}

void setvalue1(const int& value)
{  
}
int main()
{
    int i=10;
    //can remember as lvalue=at left side,rvalue=at right side
    
    //10=3;
    //like this will pop error:expression must be modifiable lvalue
    getvalue()=5;

    setvalue(i);
    // setvalue(10);
    // if like this pop error: initial value of reference to non-const must be a lvalue

    setvalue1(10); //like this it accept,const lvalue reference can accept both r and l
    setvalue1(i);

    using string=std::string;

    string firstname="sw";
    string lastname="lee";
    printname(firstname+lastname);
    printname(firstname);
    //like this is putting rvalue,but it accept
    //printname(firstname);
    //like this is passing lvalue,cannot in this case (when no two printname)
    //error: an rvalue ref cannot be bound to lvalue


}

//rvalue reference = accept rvalue

void printname(std::string&& name)
{
    std::cout<<"[rvalue]"<<name<<std::endl;
}
//rvalue is basically a temporary object

void printname(const std::string& name)
{
    std::cout<<"[lvalue]"<<name<<std::endl;
}
