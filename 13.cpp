#include <iostream>
using namespace std;

int main() {
    int arr[10], i;
    int largest, smallest;

    cout << "Enter 10 numbers: " << endl;

    // Input array
    for(i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    // Assume first element as largest and smallest
    largest = smallest = arr[0];

    // Find largest and smallest
    for(i = 1; i < 10; i++) {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "Largest element = " << largest << endl;
    cout << "Smallest element = " << smallest << endl;

    return 0;
}
