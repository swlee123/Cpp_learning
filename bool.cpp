#include <iostream>
#include "common.h"
#include "cpp.h"
using namespace std;
int main()
{
    int ival = 1024;
    int &refval = ival;
    int &refval2 = ival;
    cout << "ival = " << ival << endl << "refval = " << refval;
    refval = 1000;
    cout << endl<< "New ival = " << ival << endl<< "New refval = " << refval << endl;
    initlog();


}
