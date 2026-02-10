#include<stdio.h> 
void main()
{
    int num,count=0,i;
    printf("\n Enter a number : "); scanf("%d",&num); for(i=1;i<=num;i++)
    {
    if(num%i==0) count++;
    }
    if(count==2)
    printf("\n %d is a Prime number",num);
    else
}