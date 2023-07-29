#include <iostream>
using namespace std;

int Add(int *a, int *b){
    return *a+*b;
};    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result){
    *result = *a+*b;
}; //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
};  //Swap the value of two integers
void Factorial(int *a, int *result)
{
    for (int i=1; i<=*a;i++)
        *result *= i;
};       //Generate the factorial of a number and return that through the second pointer argument

int main()
{
    int number1 = 6;
    int *ptr1 = &number1;
    int *ptr2 = new int{1};

    Factorial(ptr1,ptr2);
    cout << "result for " << *ptr1 << " is " << *ptr2 << endl;
    return 0;
}
