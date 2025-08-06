// Loops on Arrays

#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {10, 20, 30, 40, 50};
    int size = 5;

    // Loop : 0 to size-1
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << endl;
    }
    return 0;
}

// To input values of an array from a user.

#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int price[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter price of items : \n";
        cin >> price[i];
    }
    return 0;
}

// Q: Find smallest / largest in a array.

// Smallest in an array.

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 5, 20, 10, -1};
    int size = 5;

    int smallest = INT_MAX;
    // +infinity / INT_MAX = largest possible value for any integer number.

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }

        // instead of the code we have written in if block there is a shortcut of this :
        // smallest = min(nums[i], smallest);
        // This will give the same output .
    }
    cout << "Smallest value is : " << smallest << endl;
    return 0;
}

// Largest in an array.

#include <iostream>
using namespace std;

int main()
{
    int nums[] = {10, 5, 20, 10, -1};
    int size = 5;

    int largest = INT_MIN;
    // -infinity / INT_Min = Smallest possible value for any integer number.

    for (int i = 0; i < size; i++)
    {

        if (nums[i] > largest)
        {
            largest = nums[i];
        }
        // Shortcut :
        // largest = max(nums[i], largest);
    }
    cout << "Largest value is : " << largest << endl;
    return 0;
}

// Practice Question
// Q: Find the index of values which are largest / smalllest in an array.

// Pass by Reference :

#include <iostream>
using namespace std;

void changeArr(int arr[], int size)
{
    cout << "In Function \n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i]; // 2,4,6
    }
};
int main()
{
    int arr[] = {1, 2, 3};

    changeArr(arr, 3);

    cout << "In main \n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    // The output
    cout << endl;

    return 0;
}

// Linear Search Algorithm

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1; // Value not found
}

int main()
{
    int arr[] = {4, 2, 6, 1, 10};
    int size = 5;
    int target = 1;

    cout << linearSearch(arr, size, target) << endl;

    return 0;
}

// Reverse an array
// arr[] = {4,2,7,8,1,2,5};

#include <iostream>
using namespace std;

void reverseArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverseArr(arr, 7);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Practice Questions :

// Q1: Write a function to calculate sum & product of all the numbers in an array.

// Q2: Write a function to swap the max & min number of a array.

// Q3: Write a function to print all the unique values in a array.

// Q4: Write a function to print intersection of 2 arrays.