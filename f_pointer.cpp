#include<iostream>
#include<vector>

void printvalue(int value)
{
    std::cout<<"Value: "<<value<<std::endl;
}

void foreach(const std::vector<int>& values,void(*func)(int))//using fucntion vector
{
    for(int value:values)
    func(value);
}

void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a*b);
}

int main()
{
    std::vector<int> values ={1,5,4,2,3};
    foreach(values,printvalue);
    std::cout<<std::endl;
    foreach(values,[](int value){std::cout<<"Value: "<<value<<std::endl;});//lambda 


    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10; //can be use in case of switch case

    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
            "for multiply\n");
    scanf("%d", &ch);
  
    if (ch > 2) return 0;
  
    (*fun_ptr_arr[ch])(a, b);


}