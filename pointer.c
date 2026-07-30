#include <stdio.h>

/**
 * get the memory address of a variable with the reference operator &:
 */
int main() {
    /**
    // get the memory address of a variable with the reference operator &:
    char name[] = "Towfik";

    printf("%s\n", name);  // Outputs the value of name (Towfik)
    printf("%p\n", &name); // Outputs the memory address of name (0x7ffe5367e044)
    **/

    // ==========================================================
    // POINTERS IN C - SIMPLE EXPLANATION
    // ==========================================================
    //
    // Think of memory like a group of houses.
    //
    // Every house has:
    //   1. A house number (Memory Address)
    //   2. A person living inside (Value)
    //
    // Example:
    //
    // Address        Value
    // --------       -----
    // 1000           43
    //
    // Address = Where the variable lives
    // Value   = Data stored in the variable
    //
    // ==========================================================

    // Create a normal integer variable.
    int age = 43;

    // The '&' operator means:
    // "Give me the address of age."
    //
    // Example:
    //
    // age      = 43
    // &age     = 1000 (example address)

    // Create a pointer variable.
    //
    // '*' in the declaration means:
    // "ptr is a pointer to an integer."
    int *ptr = &age;

    // ==========================================================
    // MEMORY LOOKS LIKE THIS
    // ==========================================================
    //
    // Address        Value
    // --------       -------------------------
    // 1000           43            <-- age
    //
    // 2000           1000          <-- ptr
    //
    // ptr stores the ADDRESS of age.
    //
    // ptr
    //  |
    //  |
    //  +----------------------+
    //                         |
    //                         V
    //                  +--------------+
    //                  | Address 1000 |
    //                  | Value = 43   |
    //                  +--------------+
    //
    // ==========================================================

    // Print the value of age.
    printf("age               : %d\n", age);

    // Print the address of age.
    printf("Address of age    : %p\n", (void *)&age);

    // ptr already stores the address.
    // So this prints the same address.
    printf("ptr stores        : %p\n", (void *)ptr);

    // '*' means:
    // "Go to the address stored in ptr
    // and read the value."
    printf("*ptr              : %d\n", *ptr);

    printf("\n");

    // ==========================================================
    // CHANGE VALUE USING POINTER
    // ==========================================================

    // Change the value at the address.
    //
    // Before:
    // age = 43
    //
    // After:
    // age = 100
    //
    // Because ptr points to age.
    *ptr = 100;

    printf("After *ptr = 100\n");
    printf("age               : %d\n", age);
    printf("*ptr              : %d\n", *ptr);

    printf("\n");

    // ==========================================================
    // SUMMARY
    // ==========================================================
    //
    // age
    // ----
    // Stores the VALUE.
    //
    // Example:
    // age = 100
    //
    // ----------------------------------------------------------
    //
    // &age
    // ----
    // Gives the ADDRESS of age.
    //
    // Example:
    // &age = 0x7ffee4d8...
    //
    // ----------------------------------------------------------
    //
    // ptr
    // ----
    // Stores the ADDRESS.
    //
    // ptr = &age;
    //
    // ----------------------------------------------------------
    //
    // *ptr
    // ----
    // Goes to that ADDRESS
    // and gets the VALUE.
    //
    // *ptr == age
    //
    // ==========================================================

    printf("Summary\n");
    printf("Value (age)       : %d\n", age);
    printf("Address (&age)    : %p\n", (void *)&age);
    printf("Pointer (ptr)     : %p\n", (void *)ptr);
    printf("Dereference(*ptr) : %d\n", *ptr);

    printf("\n");

    // ==========================================================
    // EASY WAY TO REMEMBER
    // ==========================================================
    //
    // age      -> Value
    //
    // &age     -> Address of age
    //
    // ptr      -> Stores the address
    //
    // *ptr     -> Value at that address
    //
    // Example:
    //
    // age = 100
    //
    // &age = 0x1000
    //
    // ptr = 0x1000
    //
    // *ptr = 100
    //
    // ==========================================================

    return 0;
}