#include <iostream>
#include <limits.h>  // For INT_MIN and INT_MAX
using namespace std;

// Function to find the maximum element in the array
int arrmax(int num[], int size)
{
  int max = INT_MIN;  // Initialize max to the smallest possible integer
  // Loop through the array
  for (int i = 0; i < size; i++)
  {
    // If current element is greater than max, update max
    if (num[i] > max)
    {
      max = num[i];
    }
  }
  return max;  // Return the maximum value found
}

// Function to find the minimum element in the array
int arrmin(int num[], int size)
{
  int min = INT_MAX;  // Initialize min to the largest possible integer
  // Loop through the array
  for (int i = 0; i < size; i++)
  {
    // If current element is smaller than min, update min
    if (num[i] < min)
    {
      min = num[i];
    }
  }
  return min;  // Return the minimum value found
}

int main()
{
  int size;
  cout << "Enter the size of array - ";  // Prompt the user to enter the array size
  cin >> size;

  int num[10000];  // Declare an array of size 10000 (max possible elements)
  
  // Input elements of the array
  cout << "Enter " << size << " elements: " << endl;
  for (int i = 0; i < size; i++)
  {
    cin >> num[i];
  }

  // Call the functions to find the maximum and minimum elements
  cout << "Maximum Element is " << arrmax(num, size) << endl;
  cout << "Minimum Element is " << arrmin(num, size) << endl;

  return 0;
}
