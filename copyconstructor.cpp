#include<iostream>
#include<string>
#include<cstring>

class String
{
private:
   char* m_buffer;
   unsigned int m_size;
public:
   String(const char* string)
   {
       m_size = strlen(string);
       m_buffer = new char[m_size+1]; //+1 is for '\0'
       memcpy(m_buffer,string,m_size);
       m_buffer[m_size]=0;

   }

   //the point is at here to write a copy constructor->>
   //definition:constructor tht take in const ref of same class
   String(const String& other)
   :m_size(other.m_size)
   {
      
       m_buffer = new char[m_size+1]; //the 'other' string will have null terminator'\0' but strlen wont include it so need +1
       memcpy(m_buffer,other.m_buffer,m_size+1);
       std::cout<<"Copied String!"<<std::endl;

   }

   ~String()
   {
       delete m_buffer;
   }

   char& operator[](unsigned int index)
   {
       return m_buffer[index];
   }

   friend std::ostream& operator<<(std::ostream& stream,const String& string);

};

std::ostream& operator<<(std::ostream& stream,const String& string)
{
    stream <<string.m_buffer;
    return stream;
}


void printstring1(String string)  //if do like this will make a copy of var::string every time u call this func 
{
    std::cout<<string<<std::endl;
}

void printstring2(const String& string)  
//if do like this will pass reference into function 2
// which will not make new copy,this is better
//  !!!!!!!!!!!!!!!!  always(most of time)pass object in const reference !!!!!!!!!!!!!!!!!
{
    std::cout<<string<<std::endl;
}


int main()
{
    String string ="Cherno";
    String second = string; //two String object pointing to the same m_buffer memory;

    second[2]='a';//if change one of them change both of them
    

    printstring2(string); 
    printstring2(second);

    //this is a shallow copy,the way to deep copy is write a copy constructor,see above

    std::cin.get();

}