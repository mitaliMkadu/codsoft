#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;


struct Task
{
    string description;
    bool completed;

    Task(const string& desc) : description(desc), completed(false) {}
};

class ToDoList
{
private:
    vector<Task> tasks;

public:
    void addTask(const string& description)
	{
        tasks.push_back(description);
        cout << "\nTask added: " << description << endl;
    }

    void viewTasks() const
	{
        if (tasks.empty())
		{
            cout << "\nNo tasks available." << endl;
        }
		else
		{
            cout << setw(5) << "ID" << setw(25) << "Description" << setw(15) << "Status" << endl;
            cout << setfill('-') << setw(45) << "" << setfill(' ') << endl;

            for (size_t i = 0; i < tasks.size(); ++i)
			{
                cout << setw(5) << i + 1 << setw(25) << tasks[i].description << setw(15)
                          << (tasks[i].completed ? "Completed" : "Pending") << endl;
            }
        }
    }

    void markTaskAsCompleted(int taskId) {
        if (taskId >= 1 && taskId <= static_cast<int>(tasks.size())) {
            tasks[taskId - 1].completed = true;
            cout << "\nTask marked as completed: " << tasks[taskId - 1].description << endl;
        } else {
            cout << "Invalid task ID. Please enter a valid task ID." <<endl;
        }
    }

    void removeTask(int taskId) {
        if (taskId >= 1 && taskId <= static_cast<int>(tasks.size())) {
            cout << "\nTask removed: " << tasks[taskId - 1].description << endl;
            tasks.erase(tasks.begin() + taskId - 1);
        } else {
           cout << "Invalid task ID. Please enter a valid task ID." << endl;
        }
    }
};

int main() {
    ToDoList toDoList;

    while (true) {
        cout << "\n===== TO-DO LIST MANAGER =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Remove Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): \n";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore(); // Clear the input buffer
                cout << "\nEnter the task description: ";
                string description;
                getline(cin, description);
                toDoList.addTask(description);
                break;
            }
            case 2:
                toDoList.viewTasks();
                break;
            case 3: {
                cout << "\nEnter the task ID to mark as completed: ";
                int taskId;
                cin >> taskId;
                toDoList.markTaskAsCompleted(taskId);
                break;
            }
            case 4: {
                cout << "\nEnter the task ID to remove: ";
                int taskId;
                cin >> taskId;
                toDoList.removeTask(taskId);
                break;
            }
            case 5:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}

