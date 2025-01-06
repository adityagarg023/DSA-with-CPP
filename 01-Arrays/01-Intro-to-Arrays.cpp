#include <iostream>
using namespace std;

// Function to print elements of an array
void printarray(int arr[], int size)
{
  for (int i = 0; i <= size; i++) // Loop to print all elements of the array
  {
    cout << arr[i] << " ";
  }
  cout << endl
       << "Printing Done" << endl;
}

int main()
{
  // Declaring an array of size 15
  int first[15];
  // Accessing an uninitialized element of the array (could be garbage value)
  cout << "Element at 10 index " << first[10] << endl;

  // Initializing an array with specific values
  int second[3] = {5, 7, 9};
  // Accessing and printing an element at index 2
  cout << "Element at 2 index " << second[2] << endl;
  // Printing the array using the custom function
  printarray(second, 3);

  // Initializing an array with some values, rest will be 0 by default
  int third[15] = {2, 6, 6, 4, 3};
  int n = 12; // Variable to control the number of elements to print
  // Printing all elements of the array
  for (int i = 0; i <= n; i++)
  {
    cout << third[i] << " ";
  }
  cout << endl;
  // Printing the array using the custom function
  printarray(third, 10);

  // Declaring another array without initialization
  int fourth[50];
  // Printing the uninitialized array (will show garbage values)
  printarray(fourth, 15);

  // Reinitializing the array with the same value using `fill_n`
  // `fill_n(array_name, no_of_elements, value)`
  fill_n(fourth, 17, 69);

  // Printing the array after reinitialization
  n = 22;
  for (int i = 0; i <= n; i++)
  {
    cout << fourth[i] << " ";
  }

  return 0;
}
