/*
Q3. C program to check whether a number is even or odd using switch case.
*/

#include <stdio.h>

int main()
{
    int a;
    
    printf("Enter any number to check even or odd: ");
    scanf("%d", &a);

    switch(a % 2)
    {
        case 0: 
            printf("Number is Even");
            break;
        case 1: 
            printf("Number is Odd");
            break;
    }

    return 0;
}