#include<iostream>
#include<chrono>
#include<algorithm>
#include<vector>

using namespace std;



int main()
{
    srand(time(0));
    vector<int> values(10000);
    auto f = []()-> int {return rand()%1000;};

    generate(values.begin(),values.end(),f);

    auto start =std::chrono::high_resolution_clock::now();
    sort(values.begin(),values.end());

    auto stop =std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
    
// Subtract stop and start timepoints and
// cast it to required unit. Predefined units
// are nanoseconds, microseconds, milliseconds,
// seconds, minutes, hours. Use duration_cast()
// function.

    
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
// To get the value of duration use the count()
// member function on the duration object
 
    return 0;



    
}
