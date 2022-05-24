#include<iostream>
#include<string>

void str1();
void str2();
void str3();

using namespace std;
string firstname="John";
string lastname="Doe";
string my_str("Dota 2 is the best game");
string my_str1("LOL sucks");
//declaration

int main(){
   
    string fullname=firstname+" "+lastname;
    cout<<fullname<<endl;
    //string name=firstname.append(lastname,0,1);
    //cout<<name;
    //str1();
    //str2();
    str3();
    cout<<my_str;
}
void str1(){
    firstname.append("$",5);
    cout<<firstname;

}

void str2(){
    firstname.append(5,'&');
    cout<<firstname;

}

void str3(){
    my_str.append(my_str1.begin()+4,my_str1.end());
    cout<<my_str;

}