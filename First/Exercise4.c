#include <stdio.h>

int main()
{
     char myInitial;
     char fname[30];
     char lname[30];
     printf("Enter your initial: ");
     scanf("%c", &myInitial);
     printf("Enter your first name: ");
     scanf("%s", fname);
     printf("Enter your last name: ");
     scanf("%s", lname);
     printf("The initial of your first name is = %c\n", myInitial);
     printf("Your name is %s %s\n", fname, lname);
     return 0;
}
