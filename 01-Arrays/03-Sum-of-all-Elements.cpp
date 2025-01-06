#include <iostream>
using namespace std;

// Function to calculate the sum of all elements in the array
int arrsum(int arr[], int size)
{
  int sum = 0;  // Initialize sum to 0
  // Loop through the array to add each element to the sum
  for (int i = 0; i < size; i++)
  {
    sum = sum + arr[i];  // Add the current element to the sum
  }
  return sum;  // Return the total sum of the array
}

int main()
{
  int size;
  cout << "Enter the size of array - ";  // Prompt the user to enter the array size
  cin >> size;

  int arr[10000];  // Declare an array with a size of 10000 (or adjust as needed)

  // Input elements of the array from the user
  cout << "Enter " << size << " elements: " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];  // Store each entered element in the array
  }

  // Call arrsum to calculate the sum of the array and print it
  cout << "Sum of all the elements is " << arrsum(arr, size) << endl;

  return 0;
}
