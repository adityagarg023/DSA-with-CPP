//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// } Driver Code Ends

class Solution {
public:
    // Function to find the maximum occurring character in a string
    char getMaxOccuringChar(string &s) {
        // Array to store the frequency of each character
        int frequency[26] = {0};

        // Count the frequency of each character in the string
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            int index = 0;

            // Map the character to its corresponding index in the frequency array
            if (ch >= 'a' && ch <= 'z') {
                index = ch - 'a';
            } else if (ch >= 'A' && ch <= 'Z') {
                index = ch - 'A';
            }

            frequency[index]++;
        }

        // Find the character with the maximum frequency
        int maxFrequency = -1;
        int resultIndex = 0;
        for (int i = 0; i < 26; i++) {
            if (frequency[i] > maxFrequency) {
                maxFrequency = frequency[i];
                resultIndex = i;
            }
        }

        // Convert the result index back to the corresponding character
        char maxOccurringChar = 'a' + resultIndex;
        return maxOccurringChar;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        Solution obj;
        cout << obj.getMaxOccuringChar(str) << endl;

        cout << "~" << "\n";
    }
    return 0;
}
// } Driver Code Ends
