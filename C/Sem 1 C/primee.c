#include<stdio.h>
#include<math.h>
void primeFactors(int n)
{
     printf("\n prime factors of %d are: ", n);
     int i;
     while(n%2==0)
     {
          printf("\n%d",2);
          n=n/2;
     }
     for(i=3;i<=n;i=i+2)
     {
           while(n%i==0)
           {
                 printf("\n%d",i);
                 n=n/i;
           }
     }
     if(n>2){
       printf("\n%d",n);
     }
}

void main()
{
	int n;
	printf("\n Enter a number to find the prime factors:  ");
	scanf("%d",&n);
	primeFactors(n);
}