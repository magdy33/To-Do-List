#include "ListToDo.hpp"

int main() {
    std::vector<ListToDo> database;  // Vector to store ListToDo objects

    int choice;
    while (true) {
        std::cout << "=====================\n";
        std::cout << "1. Add a Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Update Task State\n";
        std::cout << "4. Exit\n";
        std::cout << "=====================\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        switch (choice) {
            case 1:
                addTask(database);
                break;
            case 2:
                viewTasks(database);
                break;
            case 3:
                updateTaskState(database);
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}
