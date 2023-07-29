#include <iostream>
using namespace std;

void Print(const int *ptr)
{
    cout << "Value for given variable was: " << *ptr <<endl;
}
int main()
{
    /*
    const float PI = 3.14159f; //constants ALWAYS have to be initiliazed, otherwise it won't compile
    const float *const ptr = &PI;
    float radius = 0;
    cout << "please input value for radius: ";
    cin >> radius;
    cout << "value for circle area is " << PI * radius*radius << endl;
    */

    int randomVariable = 10;
    Print(&randomVariable);
    cout << "randomVariable final value in main: " << randomVariable << endl;
    return 0;
}
/*
    Key takeways:
    + Qualify a ptr with const to make it impossible to edit when you pass it to a function. Even if the referenced value itself is not constant
*/