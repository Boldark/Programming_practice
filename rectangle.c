#include <stdio.h>

void get_int(int);

/*Program to compute the perimeter and area of a rectangle*/

int main(void)
{
    int height = get_int();
    int width = get_int();

    printf("The perimeter is: %d\n", height + width * 2);
    printf("The area is; %d\n", height * width);
    
    return(0);
}



void get_int(int)
{
    printf("Number: \n");
    scanf("%d");
}