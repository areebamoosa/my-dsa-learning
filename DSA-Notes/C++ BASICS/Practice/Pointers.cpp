// Memory Address

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    cout << &a << endl;

    return 0;
}

// Pointers

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    cout << &a << endl;
    return 0;
}

// Pointer to Pointer

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    int **parPtr = &ptr;

    cout << &ptr << endl;
    cout << parPtr << endl;

    return 0;
}

// * -> Dereference operator

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << *(&a) << endl;  // This will give value stored at address a
    cout << *(ptr) << endl; // This will give value stored at address that is stored inside the ptr which is of a

    return 0;
}

//

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    int **parPtr = &ptr;

    cout << *(parPtr) << endl;
    cout << (ptr) << endl;
    return 0;
}

// NULL Pointer

#include <iostream>
using namespace std;

int main()
{
    int **ptr = NULL;
    cout << ptr << endl;
    // cout << *ptr << endl;
    // We can't de reference a pointer

    return 0;
}

// Pass by Value

#include <iostream>
using namespace std;

void changeA(int a)
{
    a = 20;
}

int main()
{
    int a = 10;

    changeA(a);

    cout << "Inside main function the value of a : " << a << endl; // The value is still 10 because this is pass by value
    return 0;
}

// Pass by Reference

#include <iostream>
using namespace std;

void changeA(int *ptr)
{ // pass by reference using pointers
    *ptr = 20;
}

int main()
{
    int a = 10;

    changeA(&a);

    cout << "Inside main function the value of a : " << a << endl; // The value of a now in main function will be 20 because this is pass by reference using pointers.
    return 0;
}

#include <iostream>
using namespace std;

void changeA(int &b)
{ // pass by reference using alias
    b = 20;
}

int main()
{
    int a = 10;

    changeA(&a);

    cout << "Inside main function the value of a : " << a << endl; // The value of a now in main function will be 20 because this is pass by reference by alias.
    return 0;
}

// Array Pointers

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cout << arr << endl;     // arr is a pointer
    cout << &arr[0] << endl; // the arr address is same as the address of the value at 0th position
    cout << *arr << endl;    // the value ate 0th index will be printed = 1 will be printed
    return 0;
}

// Arrays are constant Pointers

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int a = 15, b = 10;

    int *ptr = &a;
    ptr = &b;
    // Over here in pointers we can change the value like at the pointer of a, we changed it to have the value of b but if we do this same thing with arrays then we will get an error since arrays are constant pointers

    //

    int c = 15;
    arr = &c; // here shows an error that the expression must be a modifiable value, which over here is not because arrays are constants and cannot be modified.
    // So array is a constant pointer jisko ham throughout the program change nhi kr skty

    // Ager ham is array mn dosry value ka memory address store krwaingy then jo array mn already values stored hain they will be lost and and the memory is already occupied so that's why arrays are constant pointers

    return 0;
}

// Pointer Arithmetic

// Increment

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl;
    ptr++;
    cout << ptr << endl;

    // 0x7ff7bfe462c8
    // 0x7ff7bfe462cc
    // This is the output of above code to verify just see the last digit over here it is 8. Then after ptr the size increases by 4. So in C++, the memory is stored in hexadecimal so after 8 -> 9, 10 (a), 11 (b), 12 (c) = So in next output after ptr the last digit is c

    return 0;
}

// Add

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl;       // Prints 1
    cout << *(arr + 1) << endl; // Prints 2
    cout << *(arr + 2) << endl; // Prints 3

    return 0;
}

// Subtracting Pointers

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    int *ptr2;            // 100
    int *ptr1 = ptr2 + 2; // 108

    cout << ptr1 - ptr2 << endl; // 2
    return 0;
}

// Compare

#include <iostream>
using namespace std;

int main()
{
    int *ptr1;
    int *ptr2;

    cout << ptr1 << endl;
    cout << ptr2 << endl;

    cout << (ptr1 < ptr2) << endl;

    return 0;
}