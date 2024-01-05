#include <iostream>
using namespace std;
// Checking the changes it will change or not:
void update(int **ptr2)
{
    // Kuch Change hoga - No
    // ptr2 = ptr2 + 1;

    // Kuch Change hoga - YES
    // *ptr2 = *ptr2 + 1;

    // Kuch Change hoga - Yes
    **ptr2 = **ptr2 + 1;
}
int main()
{
    // Double Pointers:
    int i = 5;
    int *ptr = &i;
    int **ptr2 = &ptr;

    // Printing the address of (i) in different ways:
    cout << "Address of i is: " << ptr << endl;
    cout << "Address of i is: " << *ptr2 << endl;
    cout << "Address of i is: " << &i << endl;

    // Printing the value of (i) in different types:
    cout << "Value of i is: " << i << endl;
    cout << "Value of i is: " << *ptr << endl;
    cout << "Value of i is: " << **ptr2 << endl;

    // Printing the address of (ptr) in different ways:
    cout << "Address of ptr is: " << &ptr << endl;
    cout << "Address of ptr is: " << ptr2 << endl;

    // Checking the problems:
    cout << "Before value of i is: " << i << endl;
    cout << "Before Address of i store in ptr is: " << ptr << endl;
    cout << "Before Address of ptr store in ptr2 is: " << ptr2 << endl;
    update(ptr2);
    cout << "After value of i is: " << i << endl;
    cout << "After Address of i store in ptr is: " << ptr << endl;
    cout << "After Address of ptr store in ptr2 is: " << ptr2 << endl;
}