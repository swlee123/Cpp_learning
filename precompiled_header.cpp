// accelerating compilition time using precompiled header
// not to:
// it is a header filem tht contain other header file
// put something tht is not frequently alter
// etc:stl ,windows api ,blabla header files
// here "pch.cpp"is a precompiled header

#include "pch.cpp"

int main()
{
    std::cout<<"Hello World"<<std::endl;
}

// a h.gch file, which is a precompiled header will be generated
// simply compile the .h header file to create precompile header .gch
// if pch.h.gch is found in same folder, it is used at no need compike liao 
