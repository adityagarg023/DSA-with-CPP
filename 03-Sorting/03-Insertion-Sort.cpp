#include <iostream>
using namespace std;

// The function repeatedly takes elements from the unsorted portion and inserts them into their correct position in the sorted portion of the array.
void sort(int arr[], int size)
{
    // Outer loop iterates over the elements starting from the second element
    for (int i = 1; i <= size - 1; i++)
    {
        int index = arr[i]; // Element to be inserted into the sorted portion
        
        // Inner loop finds the correct position for the element
        int j = i - 1; // Start comparison with the previous element
        while (j >= 0 && arr[j] > index) // Shift elements to the right if they are greater than 'index'
        {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--; // Move to the next element to the left
        }

        arr[j + 1] = index; // Place the element in its correct position
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
    
    // Sort the array using the insertion sort function
    sort(arr, size);
    
    // Print the sorted array
    cout << "Array in sorted form :- " << endl;
    printarray(arr, size);

    return 0;  // Program ends successfully
}
