// Vectors

#include <iostream>
#include <vector> // header file of vectors

using namespace std;

int main()
{
    vector<int> vec; // By deafult here the vector size is 0
    return 0;
}

//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3}; // 3
    cout << vec[0] << endl;
    return 0;
}

//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(5, 1);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;
    return 0;
}

// For each loop in vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec(5, 1);

    for (int val : vec)
    {
        cout << val << endl;
    }

    return 0;
}

// Vector Functions

// 1. Size of Vectors

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> vec = {'A', 'R', 'E', 'E', 'B', 'A'};

    cout << "Size = " << vec.size() << endl;
}

// 2. Push_Back
// Element is added at the last of vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    cout << "Size = " << vec.size() << endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout << "After Push Back the Size opf vector is = " << vec.size() << endl;

    for (int val : vec)
    {
        cout << val << endl;
    }
}

// 3. Pop_Back
// The element which is at the last is deleted.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout << "After Push Back the Size opf vector is = " << vec.size() << endl;

    vec.pop_back();
    // When we do Pop Back, we don't have to write the value because by dafault the value that is at the last index of vector is deleted.

    for (int val : vec)
    {
        cout << val << endl;
    }
}

// 4. Front
// Gives front value of the array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.front() << endl;

    return 0;
}

// 5. Back
// Gives back value of the array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout << vec.back() << endl;

    return 0;
}

// 6. At
// This function gives us value at particular index.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout << vec.at(2) << endl;

    return 0;
}

// Memory Allocation of vectors.

// Siza & Capacity of vectors.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    cout << vec.size() << endl;     // 3
    cout << vec.capacity() << endl; // 4

    return 0;
}