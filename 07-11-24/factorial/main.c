#include <stdio.h>

int fact(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f *= i;
    }
    return f;
}
int main()
{
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    result = fact(num);
    printf("Factorial of %d: %d", num, result);
    return 0;
}
