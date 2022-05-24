#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    const char* name = "Cherno";//c style
    char name2[7]={'C','h','e','r','n','o','\0'};
    cout<<name2<<endl;
    printf("%s\n",name2);

    string name3="Cherno";
    name3+="Hello";//append string(actually is char array with " ")
    cout<<name3<<endl;
    cout<<name3.size();





}
//in c and cpp single quotes identify a single character,while double quote create a sting literal 'a' is single a character literal,
//while "a"is a string literal containing an 'a' and a null terminator \0.
//passing a string to a function 
//weiqi is my babe , i like weiqi miaomi qiqi!!
void printstring(std::string string)//create another copy of string 

//this will dynamically allocate a new char array to store the exact same text
//not fast enough 
//if past with const reference!!!!, more faster with no copy
{
    //if i do like string+="h"; no change to the variable from the main function
    std::cout<<string<<std::endl;
}


void printstring2(const std::string& string)
{
   // if i type  string +="h"; cannot work cuz it is a const
   //this is much faster cuz we use a reference instead allocating a new copy
   std::cout<<string<<std::endl;

}