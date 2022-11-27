#include <stdio.h>

/*A program to print out your information*/
int main(void)
{
    char name[] = "Apaokagi Ashraf";
    char DOB[] = "May 7, 2002";
    char phone[] = {'0', '9', '0', '6', '9', '1', '3', '9', '7', '9', '3', '\0'};
    
    printf("My name is %s\n", name);
    printf("I was born in %s\n", DOB);
    printf("This is my phone number: %s\n", phone);

    return (0);
}