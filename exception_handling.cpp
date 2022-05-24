// exception handling three keyword :try,catch,throw

// try: block of code which may cause exception is placed inside,and followed by one or more catch
// catch:catch the exception thrown by try block,code to handle is written inside
// throw:done using keyboard?

// every catch should have corresponding catch block.A single try box could have multiple catch

#include <iostream>

using namespace std;

int main()
{
    int numerator, denominator, result;
    cout << "Enter numerator and demoninator:" << endl;
    cin >> numerator >> denominator;
    try
    {
        if (denominator == 0)
        {
            throw denominator; // if true,transfer will be throw to the catch block
        }
        result = numerator / denominator;
    }
    catch (int ex)
    {
        cout << "Divide by zero not allowed-" << ex << endl;
        ;
    }
    cout << "Division is:" << result << endl;

    //--------------------------------//
    // handle exception with error code
    try
    {
        int age = 15;
        if (age >= 20)
            cout << "Access Granted" << endl;
        else
            throw 505;
        // can set to throw an error code such as :404/505 etc
    }
    catch (const int ex)
    {
        cout << "Error Code: " << ex << '\n';
    }

    //----------------------------------------
    // handle any typen of exceptions
    //if u dont know the throw type in the try box,can use  "..." inside catch block
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw 505;
        }
    }
    catch (...)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
    }

    cin.get();
}
