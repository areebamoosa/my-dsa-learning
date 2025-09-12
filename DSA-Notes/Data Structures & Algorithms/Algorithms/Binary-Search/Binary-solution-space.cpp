// Binary Search on Answer (a.k.a. Binary Search on the Solution Space).

#include<iostream>
using namespace std;

// Example condition function
bool check(int x) {
    // Here the condition is: x*x >= 30
    return (1LL * x * x >= 30);
}

// Binary search to find the smallest x that satisfies check(x)
int binarySearchAnswer(int low, int high) {
    int ans = -1; // will store result
    while (low <= high) {
        int mid = low + (high - low) / 2; // middle of range
        if (check(mid)) {
            ans = mid;        // mid is a possible answer
            high = mid - 1;   // try to find smaller valid answer
        } else {
            low = mid + 1;    // need bigger number
        }
    }
    return ans; // smallest valid answer
}

int main() {
    int low = 1, high = 100; // define search space
    int ans = binarySearchAnswer(low, high);
    cout << "Answer = " << ans << "\n";
    return 0;
}
