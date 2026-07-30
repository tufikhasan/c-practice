#include <stdio.h>

//scanf: Use the scanf() function to get a single word as input
/**
int main()
{
  //  Create an int and a char variable
  int myNum;

  // example 01
  printf("Type a number AND press enter: \n");
  scanf("%d", &myNum);
  // Print the number
  printf("Your number is: %d\n", myNum);

  // example 02
  char myChar;

  // Ask the user to type a number AND a character
  printf("Type a number AND a character and press enter: \n");

  // Get and save the number AND character the user types
  scanf("%d %c", &myNum, &myChar);

  // Print the number
  printf("Your number is: %d\n", myNum);

  // Print the character
  printf("Your character is: %c\n", myChar);

  char firstName[30];

  // example 03
  // Ask the user to input some text
  printf("Enter your first name: \n");

  // Get and save the text
  scanf("%s", firstName);

  // Output the text
  printf("Hello %s\n", firstName);

  // example 04
  char name[20];

  printf("Type a number AND a name and press enter: \n");

  scanf("%d %19s", &myNum, name); //%19s prevents buffer overflow by leaving room for the terminating '\0'.

  printf("Your number is: %d\n", myNum);
  printf("Your name is: %s\n", name);

  return 0;
}
**/

//fgets: Use fgets() for multiple words.
int main() {
  // Create a string
  char name[30];

  // Ask the user to input some text (full name)
  printf("Type your full name and press enter: \n");

  /**
   * name → where to store the input
   * sizeof(name) → maximum number of characters to read
   * stdin → read from the keyboard
   */
  fgets(name, sizeof(name), stdin);

  // Output the text
  printf("Hello %s", name);
  
  return 0;
}