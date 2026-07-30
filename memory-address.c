#include <stdio.h>

/**
 * When a variable is created in C, a memory address is assigned to the variable.
 * The memory address is the location of where the variable is stored on the computer.
 * When we assign a value to the variable, it is stored in this memory address.
 * To access it, use the reference operator (&), and the result represents where the variable is stored:
 */
int main(){
    int number = 10;
    printf("%p",&number);
    return 0;
}

/**
 * Note: The memory address is in hexadecimal form (0x..). You will probably not get the same result in your program, as this depends on where the variable is stored on your computer.
 * You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier.
 */