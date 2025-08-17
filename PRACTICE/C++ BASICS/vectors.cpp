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

// Leetcode 136 . Single Number

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;

        for (int val : nums)
        {
            ans ^= val;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single number is: " << s.singleNumber(nums) << endl;

    return 0;
}

// MAX Sub Array Sum

// LeetCode #53 — Maximum Subarray

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}

// Brute Force Approach

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    int maxSum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        int currSum = 0;
        for (int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Max Subarray sum = " << maxSum << endl;
    return 0;
}

// Kadane's Algorithm

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int currSum = 0;
        int maxSum = INT_MIN;

        for (int val : nums)
        {
            currSum += val;
            maxSum = max(currSum, maxSum);
            if (currSum < 0)
            {
                currSum = 0;
            }
        }
        return maxSum;
    }
};

int main()
{

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution sol;
    int result = sol.maxSubArray(nums);

    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}
