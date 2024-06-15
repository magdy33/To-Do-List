#ifndef LISTTODO_H
#define LISTTODO_H

#pragma once

#include<iostream>
#include<string>
#include<vector>


// struct is much a like class but struct element is public by default
struct ListToDo
{
    std::string value;
    bool state;

    //constructor 
    ListToDo(const std::string& v) : value(v), state(false){}

    void setState(bool newState) {
        state = newState;
    }
};

void addTask(std::vector<ListToDo>& database);
void viewTasks(const std::vector<ListToDo>& database);
void updateTaskState(std::vector<ListToDo>& database);


#endif