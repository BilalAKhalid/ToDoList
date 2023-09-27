#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Task 
{

private:
    string description;
    bool completed;

public:
    Task(const string& desc);
    void markCompleted();
    bool isCompleted() const;
    string getDescription() const;
};

class ToDoList 
{

private:
    vector<Task> tasks;

public:
    void addTask(const string& desc);
    void viewTasks() const;
    void markTaskAsCompleted(int taskIndex);
    void removeTask(int taskIndex);
};
