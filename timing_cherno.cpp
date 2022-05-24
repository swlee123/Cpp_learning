//c++ includes support for two types of time manipulations
//c++ :std::chrono library
//c style :std::time 

//under chrono library got:
//clocks,time points ,durations

//clock :
//got system_clock(realtime),steady_clock(cant adjust one)

//duration:
//to receive time duration lah
//std::chrono::duration_cast<std::chrono::microseconds> var;
//common function add,minus,blabla


//time point:
//to represents a point in time
//std::chrono::time_point<std::chrono::system_clock> var /this get current time




#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
    std::chrono::time_point<std::chrono::system_clock> start,end;
    std::chrono::duration<float> duration;

    Timer()
    {
        start= std::chrono::high_resolution_clock::now();
        
    }

     ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration=end-start;

        float ms =duration.count()*1000.0f;


        std::cout<<"Timer took "<<ms<<"ms"<<std::endl;
    }
};
//use this timer struct to auto calculate the time used

void function()
{
    Timer timer;
    for(int i=0;i<100;i++)
    {
        std::cout<<"Hello\n";

        //can try to change \n with endl ,will be more faster for some reason
    }
}
int main()
{
    using namespace std::literals::chrono_literals;

    auto start = std::chrono::high_resolution_clock::now(); // take the current time
    std::this_thread::sleep_for(1s);                        // told this thread to pause for 1s
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;

    std::cout << duration.count() << "s" << std::endl;

    std::cin.get();

    //------------------------------//

    function();
}