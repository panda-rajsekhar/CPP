#include <iostream>
using namespace std;

int main() {
    int n;

    // Taking size of the array
    cout << "Enter the size of the 1D array: ";
    cin >> n;

    int arr[n];  // Declaring array

    // Taking input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Displaying the array
    cout << "1D Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

