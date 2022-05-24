#include<iostream>
#include<memory>

using namespace std;

class myclass
{
public:
    myclass()
    {
        cout<<"Constructor Invoked"<<endl;
    }

    ~myclass()
    {
        cout<<"Destructor Invoked"<<endl;
    }
};

int main()
{
    unique_ptr<int> uniptr1=make_unique<int>(25);
    unique_ptr<int>uniptr2=move(uniptr1);//move the ownership of uniptr1 memory to uniptr2,uniptr1 become null
    //cout<<*uniptr1<<endl; // need to de reference if want to access the content
    cout<<*uniptr2<<endl;
    {
        unique_ptr<myclass> uptr1=make_unique<myclass>();//demonstrate auto allocate and deallocate
    }




    shared_ptr<myclass> shptr1=make_shared<myclass>();
    cout<<"Shared count:"<<shptr1.use_count()<<endl;//use_count()give the number of owner of the memory location 
    {
        shared_ptr<myclass> shptr2=shptr1;
        cout<<"Shared count:"<<shptr1.use_count()<<endl;
        }//this will be destroyed at end of this scope

    cout<<"Shared count:"<<shptr1.use_count()<<endl;


    weak_ptr<int> weakptr1;//weak ptr is a smart pointer that dont take ownership of that object
    {
        shared_ptr<int> shareptr=make_shared<int>(20);
        weakptr1=shareptr;
    }//after leaving scope the ,weak ptr will not keep the object alife



    

}