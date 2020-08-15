// HEADER FILE
#ifndef EMPLOYEE_TYPE_H  // no implementations (functions), just declarations
#define EMPLOYEE_TYPE_H

typedef enum  // they are numerical when printed
{
    PROJECT_MANAGER,  // 0
    SYSTEM_DEVELOPER, // 1
    ENGINEER          // 2
} EmployeeType;

char* getType(EmployeeType type);
#endif