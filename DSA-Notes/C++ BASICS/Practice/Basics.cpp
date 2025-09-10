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

// Conditionals

// Q. Find character lowercase or uppercase

#include <iostream>
using namespace std;

int main()
{
    char alpha;
    cout << "Enter an alphabet : " << endl;
    cin >> alpha;

    if (alpha >= 'a' || alpha <= 'z')
    {
        cout << "The character is lowercase" << endl;
    }
    else if (alpha >= 'A' || alpha <= 'Z')
    {
        cout << "The character is uppercase" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}

// LOOPS

// Q : Sum of numbers from 1 to n

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << " Sum of numbers from 1 to n is : " << sum << endl;
    return 0;
}

// Break statement in loops

#include <iostream>
using namespace std;

int main()
{
    int n = 50;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    { // 1 + 2 + 3 + 4 + 5 = 15
        sum += i;
        if (i == 5)
        {
            break;
        }
    }

    cout << "Sum : " << sum << endl;
    return 0;
    // Although the condition of loop will iterate for n >= 50 but since there is a condition inside which breaks the loop at n = 5 so the sum will be 15
}

// Q. Check if a number is prime or not

#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    bool isPrime = true;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        { // Non prime
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime no \n";
    }
    else
    {
        cout << "Non  no \n";
    }
}

// for larger values, 1 to root n, factors are unique after it they are repeating.

// Eg : 12

// 1 * 12
// 2 * 6
// 3 * 4
// After this values are repeating
// 4 * 3
// 6 * 2
// 12 * 1

// i = 2 , root i * root i < = n

// So we change the condition.

#include <iostream>
using namespace std;

int main()
{
    int n = 12;
    bool isPrime = true;

    for (int i = 2; i * i <= n - 1; i++)
    {
        if (n % i == 0)
        { // Non prime
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << "Prime no \n";
    }
    else
    {
        cout << "Non  no \n";
    }
}

// Do While loop

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int i = 1;

    do
    {
        cout << i << " ";
        i++;
    } while (i <= n);
    cout << endl;
    return 0;
}

// Nested Loop

// Printing stars in multiple lines

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {              // Lines
        int m = 5; // No of stars in each line
        for (int j = 1; j <= m; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}