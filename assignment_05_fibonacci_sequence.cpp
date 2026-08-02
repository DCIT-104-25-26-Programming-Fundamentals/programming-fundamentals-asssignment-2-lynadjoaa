#include <iostream>
using namespace std;

// PART A: Print first N terms
void printFibonacciTerms() {
    int n;
    cout << "How many terms? ";
    cin >> n;

    // Validate
    if (n <= 0) {
        cout << "Error: Number of terms must be positive." << endl;
        return;
    }

    cout << "Fibonacci sequence: ";
    
    int first = 0, second = 1, next;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << first; // print 0
        } 
        else if (i == 2) {
            cout << " " << second; // print 1
        } 
        else {
            next = first + second; // add previous two
            cout << " << next;
            first = second;   // shift
            second = next;    // shift
        }
    }
    cout << endl;
}

// PART B: Check if number is in Fibonacci sequence
void checkFibonacciNumber() {
    int num;
    cout << "Enter a number to check: ";
    cin >> num;

    if (num < 0) {
