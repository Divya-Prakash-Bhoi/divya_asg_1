/*
Q. C program to display basic information like name, regd no., branch and hobbies.
*/

#include <stdio.h>

int main()
{
    char name, branch, hobby;
    int regd_no;

    printf("Enter your first name:");
    scanf("%s", &name);

    printf("Enter your regd no.:");
    scanf("%d", &regd_no);

    printf("Enter you branch:");
    scanf("%s", &branch);

    printf("Enter your hobby:");
    scanf("%s", &hobby);

    printf("Your name is %s\n", name);
    printf("Your Regd No. is %d\n", regd_no);
    printf("Your Branch is %s\n", branch);
    printf("Your hobby is %s\n", hobby);

    return 0;
}