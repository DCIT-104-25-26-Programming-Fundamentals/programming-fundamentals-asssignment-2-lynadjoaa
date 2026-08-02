#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // for setprecision
using namespace std;

// Define the Student struct
struct Student {
    string name;
    int id;
    vector<double> scores;
};

// Function to calculate average of scores
double calculateAverage(const vector<double> &scores) {
    if (scores.empty()) return 0.0;
    
    double sum = 0;
    for (double score : scores) { // range-based for loop
        sum += score;
    }
    return sum / scores.size();
}

// 1. Add a Student
void addStudent(vector<Student> &students) {
    Student s; // create a new student
    
    cout << "Student name: ";
    cin.ignore(); // clear buffer
    getline(cin, s.name);
    
    cout << "Student ID: ";
    cin >> s.id;
    
    int numScores;
    cout << "How many scores? ";
    cin >> numScores;
    
    // Input each score
    for (int i = 1; i <= numScores; i++) {
        double score;
        cout << "Enter score " << i << ": ";
        cin >> score;
        s.scores.push_back(score);
    }
    
    students.push_back(s); // add student to vector
    cout << "Student \"" << s.name << "\" added successfully." << endl;
}

// 2. Display All Students
void displayAllStudents(const vector<Student> &students) {
    if (students.empty()) {
        cout << "No students have been added yet." << endl;
        return;
    }
    
    cout << fixed << setprecision(2); // round to 2 decimal places
    cout << "\n================================ STUDENT RECORDS ================================" << endl;
    cout << setw(20) << left << "Name" << setw(12) << "ID" << setw(30) << "Scores" << "Average" << endl;
    cout << "--------------------------------------------------------------------------------" << endl;
    
    for (const Student &s : students) {
        cout << setw(20) << left << s.name;
        cout << setw(12) << s.id;
        
        // Print scores
        for (double score : s.scores) {
            cout << score << " ";
        }
        
        // Print average
        double avg = calculateAverage(s.scores);
        cout << setw(10) << avg << endl;
    }
    cout << "=================================================================================" << endl;
}

// 3. Calculate Average Score for Specific Student
void calculateStudentAverage(const vector<Student> &students) {
    if (students.empty()) {
        cout << "No students have been added yet." << endl;
        return;
    }
    
    int searchID;
    cout << "Enter student ID: ";
    cin >> searchID;
    
    bool found = false;
    for (const Student &s : students) {
        if (s.id == searchID) {
            double avg = calculateAverage(s.scores);
            cout << fixed << setprecision(2);
            cout << s.name << "'s average score: " << avg << endl;
            found = true;
            break;
        }
    }
    
    if (!found) {
        cout << "Error: Student ID " << searchID << " not found." << endl;
    }
}

int main() {
    vector<Student> students; // stores all student records
    int choice;
    
    do {
        cout << "================================" << endl;
        cout << " STUDENT RECORD SYSTEM MENU" << endl;
        cout << "================================" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Display all students" << endl;
        cout << "3. Calculate average score" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        cout << endl;
        
        switch(choice) {
            case 1:
                addStudent(students);
                break;
            case 2:
                displayAllStudents(students);
                break;
            case 3:
                calculateStudentAverage(students);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Error: Invalid choice. Please enter 1-4." << endl;
        }
        
        cout << endl;
        
    } while (choice != 4);
    
    return 0;
}
