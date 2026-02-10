#include<stdio.h>
#include<conio.h>

void bubble_sort(int a[], int n)
{
	int pass, temp, j;
	for(pass = 1; pass<n; pass++)
	{
		for(j=0;j<=n-pass; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void main()
{
	int i, j, n, temp;
	printf("enter no. of elements: ");
	scanf("%d", &n);
	
	int a[n];

	for(i=0; i<n; i++)
	{
		printf("enter element %d: ", i+1);
		scanf("%d", &a[i]);
	}
	
	bubble_sort(a, n);
	printf("\nThe sorted elements: ");
	
	for(i=0; i<n; i++)
	{
		printf("%d\t ", a[i]);
	}
	getch();
}