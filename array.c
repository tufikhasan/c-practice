#include <stdio.h>

int main(){
    int numberArray[] = {1,2,3,4};
    printf("index 2: %d\n",numberArray[2]);
    printf("Size of: %zu\n",sizeof(numberArray));

    int count = sizeof(numberArray) / sizeof(numberArray[0]);
    printf("Count = %d\n", count);

    int numbers[3] = {1,2,3,4}; //excess elements in array initializer max 3 item 
    // int numbers[3] = {1,2}; //ok
    int numbers[3] = {1,2,3};
    printf("index 0: %d\n",numbers[0]);
    return 0;
}