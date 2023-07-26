#include <iostream>
using namespace std;

void Add(int a,int b, int &result) 
{
    result = a+b;
};    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result) 
{
    for (int i=1;i<=a;i++)
        result*=i;
};    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b) 
{
    int temp = a;
    a = b;
    b = temp;
};            //Swap two numbers through reference arguments
int main()
{
    int number1 = 6;
    int number2 = 20;
    int result{1};
    Swap(number1,number2);
    cout << "result for swap is " << number1 << " and " << number2 << endl;
    return 0;
}
