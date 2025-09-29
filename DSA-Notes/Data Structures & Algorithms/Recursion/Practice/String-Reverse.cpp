// Task 3: String Reverse
// Write a recursive function that reverses a string.

#include<iostream>
using namespace std;

string reverseString(string text){

    if ( text.length() <= 1){
        return text;
    }
    return reverseString(text.substr(1)) + text[0];
}

int main(){
    cout << reverseString("code") << endl;
    return 0;
}


// Call + return trace (what actually happens)

// reverseString("code")
// → Calls reverseString("ode") and will append 'c' later.

// reverseString("ode")
// → Calls reverseString("de") and will append 'o' later.

// reverseString("de")
// → Calls reverseString("e") and will append 'd' later.

// reverseString("e")
// → Base case: returns "e" immediately.

// Now the calls unwind (results come back up):
// reverseString("de") receives "e", returns "e" + 'd' → "ed".
// reverseString("ode") receives "ed", returns "ed" + 'o' → "edo".
// reverseString("code") receives "edo", returns "edo" + 'c' → "edoc".