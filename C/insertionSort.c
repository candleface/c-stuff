//Insertion Sort 
#include<stdio.h>
#include<conio.h>

void display(int a[], int n)
{
      int i;
      for(i=n-1;i>=0;i--){
        printf("%d\t",a[i]);
    }
}

void insertion_sort(int a[], int n)
{
       int pass,k,temp,j;
       for(pass=1;pass<n;pass++)
       {
            k=a[pass];
            for(j=pass-1;j>=0 && k<a[j];j--)
            {
                 a[j+1]=a[j];
            }
            a[j+1]=k;
        }
}


void main()
{
       int a[8] = {75,8,1,16,48,3,7,0};
       int n=8;
       printf("\nBefore Sorting\n");                         
       display(a,n);
       printf("\nThe Sorted array in descending order:\n");
       insertion_sort(a,n);
       display(a,n);
       getch();
}