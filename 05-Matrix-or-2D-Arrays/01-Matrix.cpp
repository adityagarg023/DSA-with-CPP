#include <iostream>
#include <limits.h>
using namespace std;

// Function to check if the target element is present in the 2D array
bool ispresent(int arr[3][4], int target)
{
    // Traverse through the array to find the target element
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            if (arr[i][j] == target)
                return true;  // Return true if found
    return false;  // Return false if not found
}

// Function to calculate and print the sum of elements in each row
void rowsum(int arr[3][4])
{
    // Iterate through rows
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        // Sum up each row's elements
        for (int j = 0; j < 4; j++)
            sum += arr[i][j];
        cout << sum << " ";  // Output the row sum
    }
    cout << endl;
}

// Function to find the row with the maximum sum and print it
void maxrowsum(int arr[3][4])
{
    int max = INT_MIN;  // Start with the minimum integer value
    int index = -1;  // To store the index of the row with the maximum sum
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        // Sum up each row's elements
        for (int j = 0; j < 4; j++)
            sum += arr[i][j];
        // Update max sum and index if a new maximum is found
        if (sum > max)
        {
            max = sum;
            index = i;
        }
    }
    cout << "The largest row sum is " << max << " at index " << index << endl;
}

// Function to calculate and print the sum of elements in each column
void colsum(int arr[3][4])
{
    // Iterate through columns
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        // Sum up each column's elements
        for (int j = 0; j < 3; j++)
            sum += arr[j][i];
        cout << sum << " ";  // Output the column sum
    }
    cout << endl;
}

// Function to find the column with the maximum sum and print it
void maxcolsum(int arr[3][4])
{
    int max = INT_MIN;  // Start with the minimum integer value
    int index = -1;  // To store the index of the column with the maximum sum
    for (int i = 0; i < 4; i++)
    {
        int sum = 0;
        // Sum up each column's elements
        for (int j = 0; j < 3; j++)
            sum += arr[j][i];
        // Update max sum and index if a new maximum is found
        if (sum > max)
        {
            max = sum;
            index = i;
        }
    }
    cout << "The largest column sum is " << max << " at index " << index << endl;
}

int main()
{
    // Declaring a 2D array
    int arr[3][4];

    // Taking input for the 2D array (row-wise)
    cout << "Give elements for the 2D array -" << endl;
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 4; col++)
            cin >> arr[row][col];

    // Printing the array
    cout << "Array content:" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";  // Print elements of each row
        cout << endl;
    }

    // Checking if a specific element (target) is present in the array
    int target;
    cout << "Give target - ";
    cin >> target;
    if (ispresent(arr, target))
        cout << "Element found" << endl;
    else
        cout << "Not found" << endl;

    // Printing sum of elements (row-wise)
    cout << "Row-wise sum - ";
    rowsum(arr);

    // Printing sum of elements (column-wise)
    cout << "Column-wise sum - ";
    colsum(arr);

    // Printing the row with the maximum sum
    maxrowsum(arr);

    // Printing the column with the maximum sum
    maxcolsum(arr);

    return 0;
}
