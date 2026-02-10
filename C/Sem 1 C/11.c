#include<stdio.h>
void main()
{
    int num,i;
    long int fact=1;
    printf("\n Enter a number : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("\n Factorial of %d = %ld",num,fact);
}