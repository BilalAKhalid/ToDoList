#pragma once
#include "Functions.h"

Task::Task(const string& desc) : description(desc), completed(false) {}

void Task::markCompleted() 
{
    completed = true;
}

bool Task::isCompleted() const 
{
    return completed;
}

string Task::getDescription() const 
{
    return description;
}

void ToDoList::addTask(const string& desc) 
{
    tasks.emplace_back(desc);
}

void ToDoList::viewTasks() const 
{
    cout << "Task List:\n";
    for (size_t i = 0; i < tasks.size(); i++) 
    {
        cout << (i + 1) << ". " << tasks[i].getDescription();
        if (tasks[i].isCompleted()) 
        {
            cout << " [Completed]";
        }
        cout << "\n";
    }
}

void ToDoList::markTaskAsCompleted(int taskIndex) 
{
    if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) 
    {
        tasks[taskIndex - 1].markCompleted();
        cout << "Task marked as completed.\n";
    }
    else 
    {
        cout << "Invalid task index.\n";
    }
}

void ToDoList::removeTask(int taskIndex) 
{
    if (taskIndex >= 1 && taskIndex <= static_cast<int>(tasks.size())) 
    {
        tasks.erase(tasks.begin() + taskIndex - 1);
        cout << "Task removed.\n";
    }
    else 
    {
        cout << "Invalid task index.\n";
    }
}
