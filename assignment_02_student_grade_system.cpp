#include <iostream>
using namespace std;

// Function to determine grade based on score
char getGrade(int score) {
    // First: Validate the score
    if (score < 0 || score > 100) {
        return '\0'; // null character means "invalid"
    }
    
    // Now check the grading scale
    if (score >= 80) {
        return 'A';
    }
    else if (score >= 70) {
        return 'B';
    }
    else if (score >= 60) {
        return 'C';
    }
    else if (score >= 50) {
        return 'D';
    }
    else { // score is 0-49
        return 'F';
    }
}

int main() {
    int score;
    char grade;
    
    cout << "Enter student score (0-100): ";
    cin >> score;
    
    // Call the function
    grade = getGrade(score);
    
    // Check if function returned invalid
    if (grade == '\0') {
        cout << "Error: Score must be between 0 and 100." << endl;
    } else {
        cout << "Grade: " << grade << endl;
    }
    
    return 0;
}
