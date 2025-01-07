#include <iostream>
using namespace std;

// Function to check if the key is present in the array
bool search(int arr[], int size, int key)
{
    // Iterate through the array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key) // If the key is found
        {
            return 1; // Return true (key exists)
        }
    }
    return 0; // Return false if key is not found
}

// Function to find the index of the key in the array
int arrindex(int arr[], int size, int key)
{
    // Iterate through the array
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key) // If the key is found
        {
            return i; // Return the index of the key
        }
    }
    return -1; // Return -1 if key is not found
}

int main()
{
    // Input the size of the array
    int size;
    cout << "Enter the size of the array - ";
    cin >> size;

    // Declare an array
    int arr[10000];

    // Input array elements
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Input the key to search
    int key;
    cout << "Enter the key to search - ";
    cin >> key;

    // Call the search function to check if the key exists
    bool found = search(arr, size, key);

    // Output the result based on the search
    if (found)
    {
        // If the key is found, also print its index
        cout << key << " is found at index " << arrindex(arr, size, key) << endl;
    }
    else
    {
        // If the key is not found, display a message
        cout << key << " is not present in the array" << endl;
    }

    return 0;
}
