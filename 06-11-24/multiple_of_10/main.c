#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(num%10 == 0)
        printf("Multiple of 10.");
    else
        printf("Not a multiple of 10.");
    return 0;
}
