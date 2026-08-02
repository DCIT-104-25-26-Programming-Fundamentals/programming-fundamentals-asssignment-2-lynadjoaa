#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "============================" << endl;
    cout << " TO-DO LIST MENU" << endl;
    cout << "============================" << endl;
    cout << "1. Add task" << endl;
    cout << "2. View tasks" << endl;
    cout << "3. Delete task" << endl;
    cout << "4. Quit" << endl;
}

// 1. Add a Task
void addTask(vector<string> &tasks) {
    string task;
    cout << "Enter task: ";
    cin.ignore(); // clear buffer so getline works
    getline(cin, task); // allows spaces in task name

    tasks.push_back(task); // add to end of vector
    cout << "Task added: \"" << task << "\"" << endl;
}

// 2. View All Tasks
void viewTasks(const vector<string> &tasks) {
    if (tasks.empty()) {
        cout << "Your to-do list is empty. Add some tasks!" << endl;
        return;
    }

    cout << "Your Tasks:" << endl;
    for (int i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl; // +1 so it starts at 1 not 0
    }
}

// 3. Delete a Task
void deleteTask(vector<string> &tasks) {
    if (tasks.empty()) {
        cout << "No tasks to delete." << endl;
        return;
    }

    viewTasks(tasks); // show tasks first
    int taskNum;
    cout << "Enter task number to delete: ";
    cin >> taskNum;

    // Validate task number. Vector index is taskNum - 1
    if (taskNum < 1 || taskNum > tasks.size()) {
        cout << "Error: Invalid task number." << endl;
    } else {
        string removedTask = tasks[taskNum - 1];
        tasks.erase(tasks.begin() + (taskNum - 1)); // remove it
        cout << "Task \"" << removedTask << "\" has been removed." << endl;
    }
}

int main() {
    vector<string> tasks; // dynamic list to store tasks
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        cout << endl;

        switch(choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                deleteTask(tasks);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Error: Invalid choice. Please enter 1-4." << endl;
        }

        cout << endl; // spacing

    } while (choice!= 4); // keep looping until user quits

    return 0;
}
