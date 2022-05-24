#include<iostream>

class Entity{
public:
    float x,y;

    void move(float xa, float ya)
    {
        x+=xa;
        y+=ya;
    }

};

class Player : public Entity
{
public:
    const char*name;
    void printname()
    {
        std::cout<<name<<std::endl;

    }
};

int main(){
    Player player;
    player.x=2;
    player.y=2;
    player.move(5,5);
    std::cout<<player.x<<" "<<player.y<<std::endl;
    std::cin.get();
}