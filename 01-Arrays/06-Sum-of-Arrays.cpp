// You are given two numbers 'A' and 'B' in the form of two arrays (A[] and B[]) of lengths 'N' and 'M' respectively, where each array element represents a digit. 
// You need to find the sum of these two numbers and return this sum in the form of an array.

// Note:
// 1. The length of each array is greater than zero.
// 2. The first index of each array is the most significant digit of the number. 
//    For example, if the array A[] = {4, 5, 1}, then the integer represented by this array is 451, 
//    and array B[] = {3, 4, 5}, so the sum will be 451 + 345 = 796. You need to return {7, 9, 6}.
// 3. Both numbers do not have any leading zeros in them, and subsequently, the sum should not contain any leading zeros.

#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m) {
    vector<int> ans; // To store the resulting sum
    int i = n - 1;   // Pointer for array 'a' (starting from the least significant digit)
    int j = m - 1;   // Pointer for array 'b' (starting from the least significant digit)
    int carry = 0;   // To handle carry-over during addition

    // Process both arrays and handle carry
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry; // Start with the carry from the previous addition

        // Add the current digit from array 'a', if available
        if (i >= 0)
            sum += a[i--];

        // Add the current digit from array 'b', if available
        if (j >= 0)
            sum += b[j--];

        // Extract the last digit of the sum and add it to the result
        ans.push_back(sum % 10);

        // Update the carry for the next iteration
        carry = sum / 10;
    }

    // Since we are adding digits from least to most significant, the result is reversed
    reverse(ans.begin(), ans.end());

    return ans; // Return the final sum as an array
}
