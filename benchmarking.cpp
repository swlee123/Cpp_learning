#include <iostream>
#include <memory>
#include <chrono>
#include <array>
// some basic code to benchmark the scope

class Timer
{
public:
    Timer()
    {
        start_time = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        stop();
    }
    void stop()
    {
        auto end_time = std::chrono::high_resolution_clock::now();

        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(start_time).time_since_epoch().count();
        auto stop = std::chrono::time_point_cast<std::chrono::microseconds>(end_time).time_since_epoch().count();

        auto duration = stop - start;
        // this give time in microsecond
        double ms = duration * 0.001;
        std::cout << duration << "us (" << ms << "ms)\n";
    }

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
};

int main()
{
    int value = 0;
    {
        Timer timer;
        for (int i = 0; i < 100000; i++)
            value += 2;
    }

    std::cout << value << std::endl;

    // measure the performance of shared_pointer and unique_pointer

    struct Vector2
    {
        float x, y;
    };

    std::cout<<"Make Shared"<<"\n";

    {
        std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
        Timer timer;

        for (int i = 0; i < sharedPtrs.size(); i++)
        {
            sharedPtrs[i] = std::make_shared<Vector2>();
        }
    }
    std::cout<<"New Shared"<<"\n";

    {
        std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
        Timer timer;

        for (int i = 0; i < sharedPtrs.size(); i++)
        {
            sharedPtrs[i] = std::shared_ptr<Vector2>(new Vector2());
        }
    }

    std::cout<<"Make Uniqued"<<"\n";

    {
        std::array<std::unique_ptr<Vector2>, 1000> sharedPtrs;
        Timer timer;

        for (int i = 0; i < sharedPtrs.size(); i++)
        {
            sharedPtrs[i] = std::make_unique<Vector2>();
        }
    }

    __debugbreak();
}
