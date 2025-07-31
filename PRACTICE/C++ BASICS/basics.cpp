// Basic Codes

// Type Casting

#include <iostream>
using namespace std;

int main()
{
    char grade = 'a'; // ASCII Value = 97

    int value = grade;
    cout << value << endl;

    double price = 100.99;

    int newPrice = (int)price;
    cout << newPrice << endl;
    // In C++, the value after decimal is completely ignored whether it is .99 or .01 it is completely cutted off and only the value before decimal is considered in int and is shown in output.
    // So here in price only 100 will be the our output
    return 0;
}

// Input from User

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter the age" << endl;
    cin >> age;

    cout << "Your age is : " << age << endl;
}

// Operators

#include <iostream>
using namespace std;

int main()
{
    int ans = (5 / (double)2);
    cout << ans << endl;
    // here 2 will be printed and not 2.5. Why? Because even though double has higher priority then int but here that double value is being stored in an int variable which ignores the value after decimal. So, that's why 2 and int value will be printed.

    return 0;
}