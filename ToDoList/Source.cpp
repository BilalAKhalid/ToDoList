#include <iostream>
#include "Functions.h"
using namespace std;

int main() 
{
    ToDoList myList;

    while (true) 
    {
        cout << "\nToDo List Manager\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) 
        {
        case 1: 
        {
            cout << "Enter task description: ";
            string description;
            getline(cin, description);
            myList.addTask(description);
            cout << "Task added.\n";
            break;
        }
        case 2:
            myList.viewTasks();
            break;
        case 3: 
        {
            cout << "Enter the task index to mark as completed: ";
            int index;
            cin >> index;
            myList.markTaskAsCompleted(index);
            break;
        }
        case 4: 
        {
            cout << "Enter the task index to remove: ";
            int index;
            cin >> index;
            myList.removeTask(index);
            break;
        }
        case 5:
            cout << "Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}