#include <iostream>
using namespace std;

// Function to check if the key exists in the array using binary search
bool search(int arr[], int size, int key)
{
    int start = 0;                // Start index
    int end = size - 1;           // End index
    int mid = start + ((end - start) / 2); // Prevent overflow for large indices

    while (start <= end)
    {
        if (key == arr[mid]) // Key found
        {
            return 1;
        }
        if (key > arr[mid]) // Key is in the right half
        {
            start = mid + 1;
        }
        else // Key is in the left half
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2); // Update mid
    }
    return 0; // Key not found
}

// Function to find the index of the key using binary search
int arrindex(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + ((end - start) / 2);

    while (start <= end)
    {
        if (key == arr[mid]) // Key found
        {
            return mid;
        }
        if (key > arr[mid]) // Key is in the right half
        {
            start = mid + 1;
        }
        else // Key is in the left half
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2); // Update mid
    }
    return -1; // Key not found
}

// Main function to test the above logic
int main()
{
    int size;
    cout << "Enter the size of the array - ";
    cin >> size;

    cout << "Enter " << size << " elements in ascending order :-" << endl;
    int arr[10000];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the key to search - ";
    cin >> key;

    // Check if the key exists in the array
    bool found = search(arr, size, key);

    if (found)
    {
        // If the key is found, also print its index
        cout << key << " is found at index " << arrindex(arr, size, key) << endl;
    }
    else
    {
        // If the key is not found
        cout << key << " is not present in this array" << endl;
    }

    return 0;
}
