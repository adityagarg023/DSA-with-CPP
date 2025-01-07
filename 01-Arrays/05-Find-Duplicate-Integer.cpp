// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

#include <iostream>
using namespace std;

// Function to find the duplicate integer in the array
int ans(int arr[], int size)
{
    int ans = 0;

    // XOR all elements in the array
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i]; // Cumulatively XOR all elements in the array
    }

    // XOR with numbers from 1 to N-1
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i; // XOR with all integers from 1 to (N-1)
    }

    // The result will be the duplicate number
    return ans;
}

int main()
{
    int arr[10000]; // Declare an array with maximum size 10000
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input the elements of the array
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Output the duplicate integer found
    cout << "Duplicate integer value present in the array is " << ans(arr, size);

    return 0;
}
