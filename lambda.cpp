#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
// a way to define a function without having to define a function
void foreach (const std::vector<int> &values, const std::function<void(int)> &func) // using fucntion vector
{
    for (int value : values)
        func(value);
}

int main()
{
    std::vector<int> values = {1, 5, 4, 2, 3};
    auto it = std::find_if(values.begin(), values.end(), [](int value)
                           { return value > 3; });

    // std::find_if is use to search throught iterator

    std::cout << *it << std::endl;
    int a = 5;
    auto lambda = [=](int value) mutable
    {a=4;std::cout<<"Value: "<<value<<a<<std::endl; };
    // capture [],takes variable from the currentn closed scope
    //[=] pass everything by value
    //[&] pass everything by reference
    //[a] pass a by value
    //[&a] pass a by reference
    // if like this cant alter the a=5 cuz we pass by value
    // auto lambda =[=](int value){a=4;std::cout<<"Value: "<<value<<a<<std::endl;};
    // need pass by reference of use mutable keyword

    foreach (values, lambda)
        ; // lambda

    // if a lambda body accesses the external variable total by reference and the external variable
    // factor by value, then the following capture clauses are equivalent:

    //[&total, factor]
    //[factor, &total]
    //[&, factor]
    //[=, &total]

    // If the lambda body contains one return statement,
    //  the compiler deduces the return type from the type of the return expression.
    // Otherwise, the compiler deduces the return type as void
}