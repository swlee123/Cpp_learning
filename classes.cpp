#include<iostream>
class Player {
public:
    int x,y;
    int speed;
    void move(int xa,int ya);//functions in class are called method
};
void Player::move(int xa,int ya){
        x+=xa*speed;
        y+=ya*speed;
    }//declare method outside class
int main (){

    Player player;
    player.x=3;
    player.y=4;
    player.speed = 10;
    player.move(2,2);
    std::cout<<player.x<<std::endl<<player.y;

}
