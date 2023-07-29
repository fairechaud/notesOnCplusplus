#include <iostream>
using namespace std;

void Print(const int &ref)
{
    cout << "Value for given variable was: " << ref <<endl;
}
int main()
{
    int randomVariable = 10;
    Print(randomVariable);
    cout << "randomVariable final value in main: " << randomVariable << endl;
    return 0;
}
/*
    Key takeways:
    + Constant references are really common in C++
    + References work with both literals and variables
    + References are more suitable to be used with objects
*/