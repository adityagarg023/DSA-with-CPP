#include <iostream>
using namespace std;

// Function to reverse a character array
void reverse(char arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        // Swap characters at start and end indices
        swap(arr[start++], arr[end--]);
    }
}

// Function to calculate the length of a character array
int getlength(char arr[]) {
    int count = 0;
    // Count characters until the null terminator '\0' is encountered
    for (int i = 0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    // Declare a character array with a maximum size of 20
    char name[20];

    cout << "Enter your name: ";
    // Take input for the name
    cin >> name;

    // Manually placing the null terminator at index 3 (for demonstration purposes)
    name[3] = '\0';

    // Print the name (up to the null terminator)
    cout << "Your name is: " << name << endl;

    // Calculate the length of the name
    int length = getlength(name);
    cout << "There are " << length << " characters in your name." << endl;

    // Reverse the name
    reverse(name, length);
    cout << "Name in reversed order: " << name << endl;

    return 0;
}
