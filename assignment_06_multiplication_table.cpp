#include <iostream>
using namespace std;

// PART A: Print multiplication table for one number
void printSingleTable() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Multiplication Table for " << num << ":" << endl;
    
    for (int i = 1; i <= 12; i++) {
        cout << num << "  x  " << i << "  =  " << num * i << endl;
    }
}

// PART B: Print tables from 1 to N
void printTablesToN() {
    int n;
    cout << "Enter a number N: ";
    cin >> n;

    // Validate
    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }

    // Outer loop: which table we are on
    for (int table = 1; table <= n; table++) {
        cout << "Multiplication Table for " << table << ":" << endl;
        
        // Inner loop: 1 to 12
        for (int i = 1; i <= 12; i++) {
            cout << table << "  x  " << i << "  =  " << table * i << endl;
        }
        
        // Separator line between tables, but not after the last one
        if (table != n) {
            cout << "---------------------------" << endl;
        }
    }
}

int main() {
    printSingleTable();
    cout << endl; // space between parts
    printTablesToN();
    return 0;
}
