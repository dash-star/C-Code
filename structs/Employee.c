#include "Employee.h"
#include <stdlib.h>  // include built-in files in C system directory
#include <stdio.h>

Employee* createEmployee(long id, char* name, EmployeeType type)
{
    Employee* ret = malloc(sizeof(Employee));
    ret->id = id;
    ret->name = name;
    ret->type = type;
    return ret;
}

void printEmployee(Employee* employee)
{
    printf("=======  Employee Info  =====\n");
    printf("Employee ID: %d\n", employee -> id);
    printf("Employee name: %s\n", employee -> name);
    printf("Employee type: %s\n", getType(employee -> type));
}