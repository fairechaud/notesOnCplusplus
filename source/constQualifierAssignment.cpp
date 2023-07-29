#include <iostream>
using namespace std;

void Print(const int *ptr)
{
    cout << "Value for given variable was: " << *ptr <<endl;
}
int main()
{
    // see compilation output. RESULT = ALL VALID
    int x = 5;
    const int MAX = 12;
    int &ref_x1 = x;
    const int &ref_x2 = x;

    ref_x1 = 10;
    //ref_x2 = 20;

    cout << ref_x1 << endl << ref_x2; //only ref_x1 was able to modify the original value, ref_x2 is a constant reference
    
    const int *ptr1 = &x;
    int *const ptr2 = &x;
    const int *const ptr3 = &x;

    const int *ptr3 = &MAX;
    const int *ptr4 = &MAX; //pointers to const variables HAVE to be const themselves


    int &r1 = ref_x1;
    const int &r2 = ref_x2; //you can create a REFERENCE to another REFERENCE but it has to keep the same qualifier

    const int *p_ref1 = ptr1; //a POINTER to another POINTER has to be declared in the same way as the original pointer
    const int *p_ref2 = ptr2;

    return 0;
}
/*
    Key takeways:
*/