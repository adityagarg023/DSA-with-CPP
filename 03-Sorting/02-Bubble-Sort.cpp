#include <iostream>
using namespace std;

// The function compares each pair of adjacent elements and swaps them if they are in the wrong order. This process is repeated until the array is sorted.

void sort(int arr[], int size)
{
    // Outer loop to iterate over each element of the array
    for (int i = 0; i < size - 1; i++)
    {
        // Inner loop to compare adjacent elements
        for (int j = 0; j < size - i - 1; j++)
        {
            // If the current element is greater than the next, swap them
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printarray(int arr[], int size)
{
    // Loop through the array and print each element followed by a space
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;  // Add a newline after printing the array
}

int main()
{
    int size;
    
    // Ask the user to input the size of the array
    cout << "Enter the size of the array - ";
    cin >> size;
    
    int arr[10000];  // Declare an array of size 10000 (can be adjusted if needed)
    
    // Ask the user to input the elements of the array
    cout << "Enter " << size << " elements for the array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];  // Store the elements in the array
    }
    
    // Sort the array using the bubble sort function
    sort(arr, size);
    
    // Print the sorted array
    cout << "Array in sorted form :- " << endl;
    printarray(arr, size);

    return 0;  // Program ends successfully
}
