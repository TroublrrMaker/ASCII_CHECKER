/** This program was built to show user the ASCII code of any integer
 *  Inspiration from a video tutorial in which the tutor said "You dont need to memorise all the ASCII code"
  */
#include <stdio.h>
#include <stdlib.h>
// Main is the entry point of the program
int main()
{
 // Declaring the variables to be used
    int num;
     char Ascii;
     // Adding title to the program
     printf(“\033[0;31m”); //Set the text to the color red
     printf(“\033[0m”); //Resets the text to default color
     printf("--------------------------------------------------------\n");
     printf("       PROGRAM TO PRINT ASCII CODE OF ANY INTEGER       \n");
     printf("--------------------------------------------------------\n\n");
     printf(“\033[0m”); //Resets the text to default color
// Program starts by asking user the integer to search for
    printf("Enter Integer: ");
    scanf("%d", &num);
    Ascii = num;
    // Program outputs the corresponding Ascii code of the integer entered by user
    printf("The ASCII code for %d is: %c", num , Ascii);

    return 0;
}
