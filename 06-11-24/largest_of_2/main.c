#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    if(num1>num2)
        printf("%d is the largest", num1);
    if(num2>num1)
        printf("%d is the largest", num2);
    return 0;
}
