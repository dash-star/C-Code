#include "EmployeeType.h"
#ifndef EMPLOYEE_H  // no implementations (functions), just declarations
#define EMPLOYEE_H

typedef struct
{
    long id;
    char* name;
    EmployeeType type;
} Employee;

Employee* createEmployee(long id, char* name, EmployeeType type);

void printEmployee(Employee* employee);

#endif
