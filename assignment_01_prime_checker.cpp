#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    // Rule 1: Numbers less than 2 are NOT prime
    if (num < 2) {
        return false;
    }
    
    // Check if num is divisible by any number from 2 to num-1
    for (int i = 2; i < num; i++) {
        if (num % i == 0) { // % means "remainder". If remainder is 0, it divides evenly
            return false; // Found a divisor, so NOT prime
        }
    }
    
    // If we got here, no divisors were found
    return true;
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    // Call the function and check the result
    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is NOT a prime number." << endl;
    }
    
    return 0;
}
