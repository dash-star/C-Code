#include "Employee.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    Employee* bryan = createEmployee(1234, "bryan", ENGINEER);
    printEmployee(bryan);
    return 0;
}
