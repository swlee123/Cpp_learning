#include<iostream>
void bresenham(int x1,int y1,int x2,int y2);

void printpixel(int x,int y);

int main()

{
    int x1,x2,y1,y2;
    std::cout<<"Please input two coordinates:"<<std::endl;
    std::cin>>x1>>y1>>x2>>y2;

    bresenham(x1,y1,x2,y2);

}

void bresenham(int x1,int y1,int x2,int y2)
{
    int x=x1;
    int y=y1;
    int dx=x2-x1;
    int dy=y2-y1;
    int p=2*dy-dx;
    while(x<=x2)
    {
        printpixel(x,y);
        x++;
        if(p<0)p+=2*dy;
        else{
            p+=2*dy-2*dx;
            y++;
        }

    }

}


void printpixel(int x,int y)
{
    std::cout<<"("<<x<<","<<y<<")"<<std::endl;


}
    
    
    
    
    
    
    
    
    
    
    
    