#include<iostream>
void increment(int&value);
int main(){
    int a=5;
    int& ref=a;
   // ref =2;
    increment(a);
    std::cout<<ref;
    return 0;
}
void increment(int&value){
    value++;
}