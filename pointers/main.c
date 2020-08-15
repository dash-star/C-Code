#include<stdio.h>
#include <stdlib.h>
int main()
{
    //regular variable
    int var = 5;

    //pointer variable
    

    int *pointer = &var;

    // we dont have 'new' keyword, but we have MALLOC
    // #include <stdlib.h>
    int *pointer2 = malloc(sizeof(int));
    printf("Value: %X\n", var); //value of regular variable
    printf("Address: %X\n", &var); //addr of regular variable
    
    printf("Pointer address: %X\n", pointer); // pointer address
    printf("Pointer dereference: %d\n", *pointer); //pointer content

    printf("Pointer2 address: %X\n", pointer2); // pointer address
    printf("Pointer2 dereference: %d\n", *pointer2); //pointer content
    
    // character pointers / arrays
    /*
        // Notations for pointers
        // [] -> arr notation
        // * -> pointer notation USE THIS
        // *ptr -> dereferencing/accessing stored value of ptr
        // 
    */
    char *str = "pc rules, macs drool";
    printf("%s\n", str);


    return 0;
}
