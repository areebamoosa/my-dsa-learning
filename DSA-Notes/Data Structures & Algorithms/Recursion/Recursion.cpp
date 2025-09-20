// Recursion

#include <iostream>
using namespace std;

void printNums(int n)
{

    if (n == 1)
    {
        cout << "1\n";
        return;
    }

    cout << n << " ";
    printNums(n - 1); // Recursive function because this function is repeatedly calling itself
}

int main()
{
    printNums(4);
    return 0;
}

// Factorial of N

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    cout << factorial(4) << endl;
    return 0;
}

// Sum of N nums

#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum(n - 1);
}

int main()
{
    cout << sum(4) << endl;
    return 0;
}

// Is Array Sorted

#include <iostream>
#include <vector>
using namespace std;

// Check if array is sorted
bool isSorted(vector<int> arr, int n)
{
    if (n == 0 || n == 1)
    {
        return true;
    }

    return arr[n - 1] >= arr[n - 2] && isSorted(arr, n - 1);
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    cout << isSorted(arr, arr.size()) << endl;

    return 0;
}

// Printing all subsets

#include<iostream>
#include<vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i){
    if (i == arr.size()){
        for (int val : ans){
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    //include
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1);

    ans.pop_back(); // backtrack;
        printSubsets(arr, ans, i+1);


}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // vector to store subsets

    printSubsets(arr, ans, 0);

    return 0;
}