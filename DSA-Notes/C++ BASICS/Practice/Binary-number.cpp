// Binary Number System

// Decimal to Binary

// Q: Decimal to Binary (n=6)

#include <iostream>
using namespace std;

int decToBinary(int decNum)
{
    int ans = 0;
    int pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main()
{
    int decNum = 6;

    cout << decToBinary(decNum) << endl;

    return 0;
}

// Q: Decimal to Binary (1 till 10)

#include <iostream>
using namespace std;

int decToBinary(int decNum)
{
    int ans = 0;
    int pow = 1;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        cout << decToBinary(i) << endl;
    }

    return 0;
}

// Binary to Decimal

// Q: Binary to Decimal (num = 101010)

#include <iostream>
using namespace std;

int binToDecimal(int binNum)
{
    int ans = 0;
    int pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    cout << binToDecimal(101) << endl;

    return 0;
}