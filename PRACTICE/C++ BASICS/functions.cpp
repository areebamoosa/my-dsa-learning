// Functions in C++

// Q#01 : Sum of numbers from 1 to N

#include <iostream>
using namespace std;

int sumN(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    cout << sumN(5) << endl;

    return 0;
}

// Q#2: Calculate N factorial

#include <iostream>
using namespace std;

int factN(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    cout << factN(4);
}

// Pass by Value

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    a = a + 10;   // a = 15
    b = b + 12;   // b = 16
    return a + b; // sum = 31
}

int main()
{
    int a = 5;
    int b = 4;

    cout << sum(a, b) << endl;

    cout << a << endl;
    cout << b << endl;
    // value of a & b will remain same even though we have changed it in sum function, this is because of pass by value
    return 0;
}

// Q : Calculate sum of digits of a number.

#include <iostream>
using namespace std;

int digitSum(int num)
{
    int digSum = 0;

    while (num > 0)
    {
        int lastDig = num % 10;
        num /= 10;

        digSum += lastDig;
    }
    return digSum;
}

int main()
{
    cout << "Sum = " << digitSum(2356) << endl;

    return 0;
}

// Q: Calculate nCr binomial Co-efficient for n & r.

#include <iostream>
using namespace std;

int factorial(int n)
{

    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n = 4;
    int r = 2;
    cout << "nCr = " << nCr(n, r) << endl;

    return 0;
}

// Q : Write a function to check if a numer is prime number or not.
// Q : Write a function to print all prime numbers from 1 to N.
// Q : Write a function to print nth Fibonacci.