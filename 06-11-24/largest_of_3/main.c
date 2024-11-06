#include <stdio.h>

int main(){
    int num1, num2, num3, small;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    
    if(num1<num2){
        if(num1<num3)
            small = num1;
        else
            small = num3;
    }
    else if(num2<num3){
        small = num2;
    }
    else{
        small = num3;
    }
    printf("%d is the smallest number.", small);
}
