#include <stdio.h>

int main()
{
    int n, i, max1, max2;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    max1 = arr[0];
    for(i=1; i<n; i++){
        if(max1<arr[i]){
            max2 = max1;
            max1 = arr[i];
        }
    }
    printf("The second largest element is %d\n", max2);

    return 0;
}
