//binary search
#include <stdio.h>
#include <conio.h>

int binSearch(int a[10], int n, int key)
{
    int first, last, mid;
    first = 0;
    last = n-1;

    while(first <= last){
        mid = (first + last)/2;

        if (key == a[mid]){
            return mid+1 ;
        }

        else if (key < a[mid]){
            last = mid - 1;
        }

        else if(key > a[mid]){
            first = mid + 1;
        }
    }
    return -1;
}

void disArr(int a[10], int n)
{
    int i;
    printf("\nGiven array: ");
    for (i = 0; i <n; i ++){
        printf("%4d\t", a[i]);
    }
}

int main(void)
{
    int n, key, location, i;
    printf("enter no. of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (i=0; i < n; i++){
        printf("Enter element: ");
        scanf("%d", &arr[i]);
    }

    disArr(arr, n);
    printf("\nEnter element to search for: ");
    scanf("%d", &key);

    location = binSearch(arr, n, key);

    if (location == -1){
        printf("Element %d is not found in the array. ", key);
    }
    else{
        printf("Element %d is found in the array at position %d.", key, location);
    }

    return 0;
}