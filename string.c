#include <stdio.h>
#include <string.h>

int main(){
    char grade = 'A'; //always use single quote
    printf("%c\n",grade);

    char grades[] = {'A','B','C'}; //always use single quote
    printf("%c\n",grades[1]);

    char name[] = "towfik";
    printf("%s\n",name);
    printf("%c\n",name[0]);

    name[0] = 'T';
    printf("%s\n", name);

    printf("Length : %zu\n",strlen(name));

    // char str1[] = "Hello ";
    /*******
    +----+----+----+----+----+----+----+
    | H  | e  | l  | l  | o  |    | \0 |
    +----+----+----+----+----+----+----+
    ***********/

    // Create an array of 20 characters.
    // Currently it contains only "Hello ".
    // The remaining bytes are empty and can be used later.
    char str1[20] = "Hello ";
    /*******
    +----+----+----+----+----+----+----+----+----+----+----+...
    | H  | e  | l  | l  | o  |    | \0 |    |    |    |    |
    +----+----+----+----+----+----+----+----+----+----+----+
    ***********/

    // Another string.
    char str2[] = "World!";

    // Before concatenation
    printf("Before: %s\n", str1);

    // Append str2 to the end of str1.
    // Result: "Hello World!"
    //strcat() removes the old '\0' and appends "World!".
    strcat(str1, str2);

    // After concatenation
    printf("After : %s\n", str1);


    
    return 0;
}