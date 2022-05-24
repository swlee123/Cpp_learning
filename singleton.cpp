// Singleton design pattern is a software design principle that is used to
// restrict the instantiation of a class to one object.
// This is useful when exactly one object is needed to coordinate actions across the system.
// For example, if you are using a logger, that writes logs to a file, you can use a singleton
// class to create such a logger.
// or random number generator class

#include <iostream>

class Singleton
{
public:
    Singleton(const Singleton&) = delete;
    static Singleton &Get()
    {
        return s_instance;
    }
    void Function(){}

private:
   // private constructor to prevent object generated
    Singleton()
    {
    }
    static Singleton s_instance;
};

Singleton Singleton::s_instance;

int main()
{
    Singleton& instance = Singleton::Get();
    // but what is someone access it as not a reference, the singleton will get copy 
    // and create a new instance
    // etc:  Singleton instance = Singleton::Get();
    //to prevent other instances , we need to delete copy constructor

    // access to function

    instance.Function();
}