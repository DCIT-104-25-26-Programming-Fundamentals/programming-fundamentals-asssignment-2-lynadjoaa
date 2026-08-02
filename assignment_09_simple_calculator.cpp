#include <iostream>
#include <iomanip>
#include <cmath> // for pow()
using namespace std;

// Each operation as its own function
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}

double exponentiate(double a, double b) {
    return pow(a, b); // from <cmath>
}

// Helper to get 2 numbers
void getNumbers(double &a, double &b) {
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
}

void displayMenu() {
    cout << "============================" << endl;
    cout << " SIMPLE CALCULATOR" << endl;
    cout << "============================" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "6. Exponentiation" << endl;
    cout << "7. Quit" << endl;
}

int main() {
    int choice;
    double num1, num2, result;
    
    cout << fixed << setprecision(2); // 2 decimal places for all results
    
    do {
        displayMenu();
        cout << "Select an operation (1-7): ";
        cin >> choice;
        
        if (choice == 7) {
            cout << "Goodbye!" << endl;
            break;
        }
        
        if (choice >= 1 && choice <= 6) {
            getNumbers(num1, num2);
        }
        
        switch(choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
                
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
                
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
                
            case 4:
                // Check for division by zero
                if (num2 == 0) {
                    cout << "Error: Cannot divide by zero." << endl;
                } else {
                    result = divide(num1, num2);
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                }
                break;
                
            case 5:
                // Modulus only works with integers
                if ((int)num2 == 0) {
                    cout << "Error: Cannot divide by zero." << endl;
                } else {
                    int modResult = modulus((int)num1, (int)num2);
                    cout << "Result: " << (int)num1 << " % " << (int)num2 << " = " << modResult << endl;
                }
                break;
                
            case 6:
                result = exponentiate(num1, num2);
                cout << "Result: " << num1 << " ^ " << num2 << " = " << result << endl;
                break;
                
            default:
                cout << "Error: Invalid choice. Please enter 1-7." << endl;
        }
        
        cout << endl;
        
    } while (choice != 7);
    
    return 0;
}
