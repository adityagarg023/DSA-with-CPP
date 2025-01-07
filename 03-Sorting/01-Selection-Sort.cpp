#include <climits>
#include <iostream>
using namespace std;

// Function to sort the array using Selection Sort
void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int minindex = i;
        // Find the index of the smallest element in the unsorted part
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }
        // Swap the smallest element with the first element of the unsorted part
        swap(arr[i], arr[minindex]);
    }
}

// Function to print the array
void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array - ";
    cin >> size;

    int arr[10000];
    cout << "Enter " << size << " elements for the array :-" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, size);

    // Print the sorted array
    cout << "Sorted Array: ";
    printarray(arr, size);

    return 0;
}
