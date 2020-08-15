#include "EmployeeType.h"  // including a file in the same directory
#include <stdlib.h>  // include built-in files in C system directory

char* getType(EmployeeType type)
{
    switch(type)
    {
        case PROJECT_MANAGER:
            return "Project Manager";
        case SYSTEM_DEVELOPER:
            return "System Developer";
        case ENGINEER:
            return "Engineer";
    }
    return NULL;
}