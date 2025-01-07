#include <iostream>
using namespace std;

// The function iterates through the array, finding the minimum element in the unsorted part and swapping it with the first unsorted element.

void sort(int arr[], int size)
{
    // Outer loop to iterate over each element of the array
    for (int i = 0; i <= size - 1; i++)
    {
        int minindex = i;  // Assume the current element is the minimum
        
        // Inner loop to find the smallest element in the remaining unsorted part
        for (int j = i + 1; j < size; j++)
        {
            if (arr[minindex] > arr[j])
            {
                minindex = j;  // Update minindex if a smaller element is found
            }
        }
        
        // Swap the found minimum element with the current element at index i
        swap(arr[i], arr[minindex]);
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
    
    // Sort the array using the sort function
    sort(arr, size);
    
    // Print the sorted array
    cout << "Array in sorted form :- " << endl;
    printarray(arr, size);

    return 0;  // Program ends successfully
}
