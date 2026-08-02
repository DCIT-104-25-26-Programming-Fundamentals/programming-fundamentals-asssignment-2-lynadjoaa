#include <iostream>
using namespace std;

// Function to calculate sum
int calculateSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

// Function to calculate average
double calculateAverage(int arr[], int n) {
    int sum = calculateSum(arr, n); // we can reuse the sum function
    return (double)sum / n; // cast to double so we get 4.6 not 4
}

// Function to find maximum
int findMax(int arr[], int n) {
    int max = arr[0]; // assume first element is max
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // update if we find bigger
        }
    }
    return max;
}

// Function to find minimum
int findMin(int arr[], int n) {
    int min = arr[0]; // assume first element is min
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i]; // update if we find smaller
        }
    }
    return min;
}

int main() {
    int n;
    
    cout << "How many numbers? ";
    cin >> n;
    
    // Validate N
    if (n <= 0) {
        cout << "Error: Number of elements must be positive." << endl;
        return 0; // stop program
    }
    
    int arr[n]; // create array of size n
    
    // Read numbers into array
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    // Call all functions and print results
    cout << "\nResults:" << endl;
    cout << "Sum: " << calculateSum(arr, n) << endl;
    cout << "Average: " << calculateAverage(arr, n) << endl;
    cout << "Maximum: " << findMax(arr, n)
