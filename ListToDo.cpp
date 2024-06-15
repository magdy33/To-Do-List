#include "ListToDo.hpp"




// ListToDo::ListToDo()
// {
// }

void addTask(std::vector<ListToDo>& database)
{
    std::string newTask;
    std::cout<<"Enter a new Task \n";
    std::cin.ignore();
    std::getline(std::cin,newTask);
    database.push_back(newTask);
}



void viewTasks(const std::vector<ListToDo>& database)
{
    if(database.empty())
    {
        std::cout<<"List is empty yet\n";
        return;
    }

    std::cout << "Tasks in your lists are:\n";
    for (size_t i = 0; i < database.size(); ++i) {
        std::cout << i + 1 << ". " << database[i].value << " (State: " << (database[i].state ? "true" : "false") << ")" << std::endl;
    }
}


void updateTaskState(std::vector<ListToDo>& database) {
    if (database.empty()) {
        std::cout << "No data found." << std::endl;
        return;
    }

    int index;
    std::cout << "Enter the number of the task to update its state: ";
    std::cin >> index;

    if (index <= 0 || index > static_cast<int>(database.size())) {
        std::cout << "Invalid task number." << std::endl;
        return;
    }

    bool newState;
    std::cout << "Enter the new state (0 for false, 1 for true): ";
    std::cin >> newState;

    database[index - 1].setState(newState);
    std::cout << "Task state updated." << std::endl;
}