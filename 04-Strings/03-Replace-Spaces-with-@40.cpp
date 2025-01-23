#include <bits/stdc++.h>
using namespace std;

// Function to replace spaces with "@40"
string replaceSpaces(string &str) {
    string ans = "";  // String to store the result

    // Iterate through each character in the input string
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            // If the character is a space, append "@40" to the result
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        } else {
            // Otherwise, append the current character to the result
            ans.push_back(str[i]);
        }
    }

    // Return the modified string
    return ans;
}

// Driver code to test the function
int main() {
    string str;
    getline(cin, str);  // Taking input string with spaces

    // Call the function to replace spaces
    cout << replaceSpaces(str) << endl;

    return 0;
}
