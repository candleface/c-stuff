#include <stdio.h>

void main()
{
    int n, Arr[n], temp;
    printf("\nEnter array size: ");
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        printf("\nEnter number: ");
        scanf("%d", &arr[i]);
    }
    
    int j = n-1;
    while(i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i<n; i++){
        printf("\n%d", arr[i]);
    }
}