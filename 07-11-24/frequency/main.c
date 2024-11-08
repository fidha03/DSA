#include <stdio.h>

int main()
{
    int n, i, j, visited = -1;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int a[n], freq[n];
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
        freq[i] = 1;
    }
    
    for(i=0; i<n; i++){
        if(freq[i] == visited){
            continue;
        }
        for(j=i+1; j<n; j++){
            if(a[i] == a[j]){
                freq[i]++;
                freq[j] = visited;
            }
        }
    }
    printf("Element: \tFrequency: \n");
    for(i=0; i<n; i++){
        if(freq[i] != visited){
            printf("%d\t\t%d\n", a[i], freq[i]);
        }
    }

    return 0;
}
