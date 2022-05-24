// mutithreading support was introduced in cpp11






#include<iostream>
#include<thread>
//mingw32 dont support thread,if want use in mingw32,need to donwload extra libraries from github

static bool s_Finished = false;

void dowork()
{
    using namespace std::literals::chrono_literals;

    std::cout<<"Started thread id="<<std::this_thread::get_id()<<std::endl;

    while(!s_Finished){
    std::cout<<"Working...\n";
    std::this_thread::sleep_for(1s);
    
    }
}
int main()
{
    std::thread worker(dowork);

    std::cin.get();//wait until to press any key,block excecution of next code line
    s_Finished = true;

    worker.join();
    std::cout<<"Finished!"<<std::endl;
    std::cout<<"Started thread id="<<std::this_thread::get_id()<<std::endl;
    std::cin.get();
}