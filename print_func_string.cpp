#include<iostream>

int main()
{
    std::cout<<__func__<<__LINE__<<std::endl;
    std::cout<<__FUNCTION__<<std::endl;
    std::cout<<__PRETTY_FUNCTION__<<std::endl;
}

///__FUNCTION__ is another name for __func__, provided for backward compatibility with old versions of GCC.
//In C, __PRETTY_FUNCTION__ is yet another name for __func__, except that at file scope (or, in C++, namespace scope), 
//it evaluates to the string "top level". In addition, in C++, __PRETTY_FUNCTION__ contains the signature
// of the function as well as its bare name.


//__LINE__ is a preprocessor macro that expands to current line number in the source file,
// as an integer. __LINE__ is useful when generating log statements, error messages intended for programmers,
// when throwing exceptions, or when writing debugging code.

