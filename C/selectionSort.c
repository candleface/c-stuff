#include<stdio.h>
#include<conio.h>

int min(int a[], int k, int n)
{
    int loc, j, min;
    min = a[k];
    loc=k;
    for(j=k+1; j<=n-1; j++){
        if(min>a[j])
        {
            min = a[j];
            loc=j;
        }
    }
    return loc;
}

void selectionSort(int a[],int n)
{
    int i,loc,temp;
    for(i=0;i<n;i++)
    {
        loc= min(a,i,n);
        temp=a[i];
        a[i] = a[loc];
        a[loc] = temp;
    }

}

void main()
{
    int a[8] ={101,103,23,466,56,109,233,104};
    int n=8,i;
    printf("\nBefore Sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\nThe register numbers from the highest to lowest are:\n");
    selectionSort(a,n);
    for(i=n-1;i>=0;i--)
    {
        printf("%d\t", a[i]);
    }
    getch();
}