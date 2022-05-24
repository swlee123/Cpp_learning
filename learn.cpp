#include<iostream>
#include<string>
#include<cstring>

using std::cout;
using std::cin;

int main()
{
    double earn[4]{0.1};
    char dog[4]={'d','o','g','\0'}; //c-style string.need manually put \0
    //std::cout<<dog;

    char bird[]="Mr Cheeps";//this no need put \0

    char country[20];
    char food[20];

    //std::cout<<"Your favourite country:";
    //std::cin>>country;
    //std::cout<<"Yoour favourite food:";
    //std::cin>>food;
    //std::cout<<country <<" "<<food<<std::endl;
    // cin takes whitespace as terminator so if input united state,united become country and state become food

    char name[20];
    char home[20];
    //use getline()can read entire line to prevent problem above to happen

    //cout<<"Enter your name:";
   //cin.getline(name,20);
    //cout<<"Enter your hometown:";
   // cin.getline(home,20);
    //cout<<name<<"   "<<home<<std::endl;
    //this is better cuz it takes enter as terminator instead of whitespace

    //equivalent to two call of input line

   // cin.getline(name,20).getline(food,20);
    //cout<<name<<"   "<<home<<std::endl;

    char animal[20];
    char a_name[20];

    //get() read white space
    //get() leaves the delimiter("\n") in the queue thus letting you able to consider it as part of the next input

    //cin.get(animal,5);
   // cin.get(a_name,5);
    //cin.get();
    //cout<<animal<<"is"<<a_name<<std::endl;

    //cout<<"new~"<<std::endl;

    //cin.get(animal,5).get(a_name,5);
     //cout<<animal<<"is"<<a_name<<std::endl;


    //mixing int and string

    int year;
    char add[20];
    cout<<"Enter year:";
    cin>>year;
    cout<<"Enter address:";
    cin.getline(add,20);
    cout<<"Year:"<<year<<std::endl;
    cout<<"Address:"<<add<<std::endl;
    // no chance to enter add,cuz whenu enter year and enter it leaves "\n"in the input queue and "\n"masuk in add
    //change like below to handle int string input problem

    cout<<"Enter year:";
    cin>>year;
    cin.get();//cin.get() absord and discard the "\n" which is input but "enter",then newline wont masuk in add
    cout<<"Enter address:";
    cin.getline(add,20);
    cout<<"Year:"<<year<<std::endl;
    cout<<"Address:"<<add<<std::endl;


    //reading line into string
    std::string str;
    getline(cin,str);//!!!
    cout<<str;





    return 0;

}