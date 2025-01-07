#include <iostream>
using namespace std;

// Function to swap alternate elements in the array
void altswap(int arr[], int size)
{
    // Iterate through the array, jumping two indices at a time
    for (int i = 0; i < size - 1; i += 2)
    {
        int j = i + 1; // Get the next index for swapping
        swap(arr[i], arr[j]); // Swap the current element with the next element
    }
}

// Function to print the elements of the array
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "; // Print each element separated by space
    }
    cout << endl; // Add a newline after printing the array
}

int main()
{
    int size;
    cout << "Enter the size of the array - ";
    cin >> size; // Input the size of the array

    int arr[10000]; // Declare an array of maximum size 10000

    // Input elements of the array
    cout << "Enter " << size << " elements for the array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i]; // Read each element
    }

    // Call the function to swap alternate elements
    altswap(arr, size);

    // Print the modified array
    cout << "Array after Swap: ";
    printarray(arr, size);

    return 0;
}
