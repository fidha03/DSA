#include <stdio.h>

int main()
{
    int num1, num2, result;
    char op;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Select one operator ( +, -, *, /): ");
    scanf("%s", &op);
    
    if(op == '+'){
        printf("Result : %d", num1+num2);
    }
    else if(op == '-'){
        printf("Result : %d", num1-num2);
    }
    else if(op == '*'){
        printf("Result : %d", num1*num2);
    }
    else if(op == '/'){
        printf("Result : %d", num1/num2);
    }
    else
        printf("Invalid symbol");
        
    return 0;
}
