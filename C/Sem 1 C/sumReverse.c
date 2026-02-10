
#include <stdio.h>

int main(void)
{
	int num, orgnum;
	int sum=0, rev=0, rem;
	printf("enter number: ");
	scanf("%d", &num);
	orgnum = num;
	
	while(num>0)
	{
		rem = num%10;
		sum += rem;
		rev = rev*10 + rem;
		num = num/10;
	}
		
	printf("sum of digits =%d \n", sum);
	printf("reversed num= %d \n", rev);
	
	if (orgnum == rev)
	{
		printf("%d is a palindrome", orgnum);
	}
	else
	{
		printf("%d isn't a palindrome", orgnum);
	}
}