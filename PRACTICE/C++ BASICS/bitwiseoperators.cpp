// Bitwise Operators

// 1. Bitwise &

#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 8;

    cout << (a & b) << endl;
}

// 2. Bitwise |

#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 8;

    cout << (a | b) << endl;
}

// 3. Bitwise ^

#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 8;

    cout << (a ^ b) << endl;
}

// 4. Bitwise <<

#include <iostream>
using namespace std;

int main()
{
    cout << (4 << 1) << endl;
}

//

#include <iostream>
using namespace std;

int main()
{
    cout << (10 << 2) << endl;
}

// 5. Bitwise >>

#include <iostream>
using namespace std;

int main()
{
    cout << (10 >> 1) << endl;
}

//

#include <iostream>
using namespace std;

int main()
{
    cout << (8 >> 2) << endl;
}

// Scope of Variables

// Local Variables

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        int x = 1; // Local Scope variable: can't be accessed outside this block of code.
    }
    cout << x << endl;
}

// Global Variables

#include <iostream>
using namespace std;

int x = 10; // Global Scope var can be accessed anywhere in the code

int fun()
{
    cout << x << endl;
    return x;
}
int main()
{
    fun();
    cout << x << endl;
}
