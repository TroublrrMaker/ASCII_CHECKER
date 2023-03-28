#include <stdio.h>
#include <stdlib.h>

int main()
{
int opt, num1, num2;
float res;
   printf("--------------------------------------------------\n");
     printf("          TROUBLRRMAKER'S CALCULATOR       \n");
     printf("--------------------------------------------------\n\n");
printf("1. ADDITION\n");
printf("2. SUBSTRACTION\n");
printf("3. MULTIPLICATION\n");
printf("4. DIVISION\n");

printf("Select Your Operation (1 - 4): ");
scanf("%d", &opt);

if (opt == 1)
{
    printf("YOU HAVE CHOSEN ADDITION\n");
     printf("Enter Number 1: ");
     scanf("%d", &num1);
     printf("%d + ", num1);
     scanf("%d", &num2);
     res = num1 + num2;
     printf("%d + %d = %.1f", num1, num2, res);
}
else if (opt == 2)
{
    printf("YOU HAVE CHOSEN SUBSTRACTION\n");
     printf("Enter Number 1: ");
     scanf("%d", &num1);
     printf("%d - ", num1);
     scanf("%d", &num2);
     res = num1 - num2;
     printf("%d - %d = %.1f", num1, num2, res);
}
else if (opt == 3)
{
    printf("YOU HAVE CHOSEN MULTIPLICATION\n");
     printf("Enter Number 1: ");
     scanf("%d", &num1);
     printf("%d x ", num1);
     scanf("%d", &num2);
     res = num1 * num2;
     printf("%d x %d = %.1f", num1, num2, res);
}
else if (opt == 4)
{
    printf("YOU HAVE CHOSEN DIVISION\n");
     printf("Enter Number 1: ");
     scanf("%d", &num1);
     printf("%d ÷ ", num1);
     scanf("%d", &num2);
     res = num1 / num2;
     printf("%d ÷ %d = %.2f", num1, num2, res);
}
else
{
    printf("YOU HAVE MADE A WRONG SELECTION\n");
    system("pause");
}
    return 0;
}
