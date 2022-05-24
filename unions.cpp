#include<iostream>

struct vector2
{
    float x,y;
};

struct vector4
{
    union 
    {
        struct 
        {
            float x,y,z,w;
            
        };
        struct 
        {
            vector2 a,b;
        };
        
    };
    
};

void printvector2(const vector2& vector)
{
    std::cout<<vector.x<<", "<<vector.y<<std::endl;

}

int main()
{
    struct Union
    {
    union 
      {
        float a;
        int b;

       };
    };

    Union u;
    u.a=2.0f;
    std::cout<<u.a<<", "<<u.b<<std::endl;
    std::cout<<"---------------------"<<std::endl;

    ///////////////////////////////////

    vector4 vector = {1.0f,2.0f,3.0f,4.0f};

    printvector2(vector.a);
    printvector2(vector.b);
    //vector2 type variable name a punya x,y
    vector.z=500.0f; //(vector4)vector.z in first struct inside union occupy the same memory loacation as vector2 b in second struct 
    std::cout<<"---------------------"<<std::endl;
    printvector2(vector.a);
    printvector2(vector.b);

}