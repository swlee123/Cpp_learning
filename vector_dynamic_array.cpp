#include<iostream>
#include<string>
#include<vector>

struct Vertex
{
    float x,y,z;
};

std::ostream& operator<<(std::ostream& stream,const Vertex& vertex )
{
    stream<< vertex.x<<", "<<vertex.y<<", "<<vertex.z;
    return stream;
}

void function(const std::vector<Vertex>& vertices)
{

}//if pass vector to function make sure to pass by reference to avoid copying

int main()
{
    //Vertex*vertices=new Vertex[5];
    //vertices[4];
    //static array on heap,cannot resize,if set to large size is waste of memory

    std::vector<Vertex> vertices; //can pass primitive data types like int,float..
    //format:vector <datatype> nameofvector;
    vertices.push_back({1,2,3});//to put value to x,y,z
    vertices.push_back({4,5,6});

    for(int i=0;i<vertices.size();i++)
    {
        std::cout<<vertices[i]<<std::endl;
        std::cout<<vertices.at(i)<<std::endl;
    }// two methods to access the context is same as array
     //function vector.size() returns unsigned int,so its better to do unsigned int i=0;
     std::cout<<vertices.size()<<std::endl;

    for(Vertex v:vertices)
    {
        std::cout<<v<<std::endl;
    }//second method to print out,this will make copy

     for(const Vertex& v:vertices)
    {
        std::cout<<v<<std::endl;
    }//if pass by reference we will not be copying the vertices 

    vertices.erase(vertices.begin()+1);//erasing 4,5,6

      for(const Vertex& v:vertices)
    {
        std::cout<<v<<std::endl;
    }

}