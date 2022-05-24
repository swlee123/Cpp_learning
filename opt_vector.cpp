#include<iostream>
#include<vector>

//everytime we allocate new element to any vector it will copy and this is not optimizing the memory


struct Vertex
{
    float x,y,z;

    Vertex(float x,float y,float z)
    :x(x),y(y),z(z)
    {}

    //wrote copy constructor to see when it is copied

    Vertex(const Vertex& other)
    :x(other.x),y(other.y),z(other.z)
    {
        std::cout<<"Copied!"<<std::endl;
    }
};
int main()
{
    //Level 1:
    //std::vector<Vertex> vertices;
   
    //vertices.push_back(Vertex(1,2,3)); //everytime we use puch_back to add something it will copy it first,run and see
    //vertices.push_back(Vertex(4,5,6));
    //vertices.push_back(Vertex(7,8,9));//6 copies in this code

    //resize(one copy),add(one copy),so got 6 copies

    //now we want to tell vector to set capacity to 3 to avoid copying

    //Level 2:

    //std::vector<Vertex> vertices;
    ////std::vector<Vertex> vertices(3);//this construct 3 vertices object,not used
    //vertices.reserve(3);
    //vertices.push_back(Vertex(1,2,3)); //this time we know already we need 3 capacities,so we tell compliler to reserve 3 places
    //vertices.push_back(Vertex(4,5,6));//save great deal of memories
    //vertices.push_back(Vertex(7,8,9));

    //Level 3:
    //construct a vertex object with the following parameter in place in our !!actual!! vector memory

    std::vector<Vertex> vertices;
    vertices.reserve(3);
    vertices.emplace_back(1,2,3); 
    vertices.emplace_back(4,5,6);
    vertices.emplace_back(7,8,9);
    //this time not a single copy is generated
    //run alot faster
    



}