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
    + Qualify a ptr with const to make it impossible to edit when you pass it to a function. Even if the referenced value itself is not constant
*/