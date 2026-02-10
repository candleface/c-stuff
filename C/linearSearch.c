#include<stdio.h>
#include<conio.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i +1; 
        }
    }
    return -1; 
}

void displayArray(int a[10],int n)
{
    int i;
    printf("\n Given array : ");
    for(i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
}

void main() {
    int a[10],n,key,loc,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++)
    scanf("%d", &a[i]);
    printf("Enter the element to search: ");
    scanf("%d", &key);
    displayArray(a,n);
    loc = linearSearch(a,n,key);
    if(loc==-1)
    printf("\n%d is not found",key);
    else
    printf("\n%d is found at location %d",key,loc);
    getch();
    
}