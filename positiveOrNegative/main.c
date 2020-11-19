#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num = 0;
   printf("Please enter a number:");
   scanf("%d", &num);
    if (num > 0)
    {
        printf("The number is Positive");
    }
    else
    {
        printf("The number is negative");
    }
}
