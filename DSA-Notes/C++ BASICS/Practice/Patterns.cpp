// Patterns using for loop & nested loops

// Outer loop -> n times
// Inner loop -> 1 single row

// Q # 01 : 4 lines with numbers 1 to 4

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++) // outer loop
    {
        for (int j = 1; j <= n; j++) // inner loop
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}

// Q # 02 : 4 lines with 4 stars

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}

// 1 to n or 0 to n-1 will print same number of patterns.

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    return 0;
}

// Q # 03: 4 lines with 4 characters.

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A'; // ASCII Value of A = 65
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch = ch + 1; // 65 + 1 => 66 --> B => ch gets updated
        }
        cout << endl;
    }
}

// Q # 04: Square Pattern of numbers

// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << "After Pattern value of num : " << num << endl;
    return 0;
}

// Q # 05: Square Pattern of letters

// A B C
// D E F
// G H I

#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    cout << "After Pattern value of char : " << ch << endl;
    return 0;
}

// Q # 06 : Triangle Pattern => n = 4
// *
// * *
// * * *
// * * * *

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i <= n; i++)
    {
        char star = '*';
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}

// Logic of this pattern
// n=4

// i = 0    *        -> 1  i+1
// i = 1    * *      -> 2  i+1
// i = 2    * * *    -> 3  i+1
// i = 3    * * * *  -> 4  i+1

// Q # 07: Triangle Pattern

// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int num = 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}

// Logic of this pattern
// n=4

// i = 0    1        -> 1  i+1
// i = 1    2 2      -> 2  i+1
// i = 2    3 3 3    -> 3  i+1
// i = 3    4 4 4 4  -> 4  i+1

// Q # 08: Triangle Pattern

// A
// B B
// C C C
// D D D D

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i; // Starting with 'A' and increasing each row

        for (int j = 0; j < i + 1; j++)
        {

            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q # 09: Triangle Pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

// Q # 10: Reverse Triangle Pattern
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// Eg of backward loop

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = n; i > 0; i--)
    {
        cout << i << endl;
    }
    return 0;
}

//

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Q # 11: Floyd's Triangle Pattern (Numbers)
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}

// Q #12 : Floyd's Triangle Pattern ( Char)
// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j > 0; j--)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}

// Q # 13: Inverted Triangle Pattern
// 1 1 1 1
//   2 2 2
//     3 3
//       4

// We always have to print space that appears at the start

#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    int num = 1;

    for (int i = 0; i < n; i++)
    {
        // spaces
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // nums
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
    return 0;
}
// Logic of this pattern      space    num
// i=0   1 1 1 1                0       4
// i=1     2 2 2                1       3
// i=2       3 3                2       2
// i=3         4                3       1
//  for spaces = i and space value is same
//  for total no in a row - i -> 4 = 4-0 = 4
// for the value of num = i + 1

// Q # 14 : Pyramid Pattern

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    int num = 1;

    for (int i = 0; i < n; i++)
    {

        // spaces : n-i-1
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        // Numbers set 1 ( left set of numbers)
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        // Numbers set 2 ( Right set of numbers : Backward Loop)
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}

// Q # 15: Hollow Diamond Pattern

//     *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//     *

#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // Top Part ( n=4)
    for (int i = 0; i < n; i++)
    {

        // Spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";

        if (i != 0)
        {
            // For Second spaces & then second star
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom Half
    for (int i = n - 2; i >= 0; i--)
    {
        // Print spaces before first star
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";

        // First star
        cout << "*";

        // Print spaces between two stars (only from row 1 onwards)
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
                cout << " ";

            // Second star
            cout << "*";
        }

        cout << endl;
    }
}

// Q # 16 : Butterfly Pattern

// *      *
// **    **
// ***  ***
// ********
// ********
// ***  ***
// **    **
// *      *