#include <stdio.h>

int prime(int n){
    int flag = 0,i;
    if(n==0 || n==1){
        flag = 1;
    }
    for(i=2; i<n; i++){
        if( n%i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 0){
        printf("\nThe number is prime.");
    }
    else{
        printf("\nThe number is not prime.");
    }
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
