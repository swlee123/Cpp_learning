#include<iostream>
#include<string>
#include<vector>

template<typename A,int N>
//template tht will be evaluated at compile time
//could also be : template<class T>
//template doesnt really exist until we call it
//template is to let compiler write or complete code for you


class Array
{
private:
   A  m_array[N];
public:
   int getsize()const {return N;}
};


template<typename T>
void print(T value)
{
    std::cout<<value<<std::endl;
}

template<typename W>
void p1(W value)
{
    std::cout<<value<<std::endl;
}

template<class A>
void bubblesort(A a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j =n-1;i<j;j--)
        {
            if(a[j<a[j-1]])
               swap(a[j],a[j-1]);
        }
    }
}

int main()
{
    Array<std::string,50> array;
    std::cout<<array.getsize()<<std::endl;
    print(5);//using template and call the the print function with the type int
    //cpp will know it is int
    print("Hello");
    print(5.5f);
    p1<int>(10);

    return 0;
}