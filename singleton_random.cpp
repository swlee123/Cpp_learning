#include <iostream>

class Random
{
public:
    Random(const Random &) = delete;
    void operator=(Random const&) = delete;

    //either delete or put in private
    static Random &Get()
    {
        static Random instance;
        return s_instance;
    }

    static float Float() { return Get().FloatImpl(); }

private:
    // private constructor to prevent object generated
    Random()
    {
    }

    float FloatImpl() { return member; }
    float member = 0.5f;
    static Random s_instance;
};

Random Random::s_instance;

int main()
{
    auto number = Random::Float();
    std::cout << number << "\n";
}
