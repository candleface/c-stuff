#include <stdio.h>

void main()
{
	int num, sum = 0;
	
	do{
		printf("\nEnter a number: ");
		scanf("%d", &num);
	
		if (num > 0 && num !=999){
			sum += num;
			printf("Sum = %d \n", sum);
		}
	}while(num != 999);

	printf("You have pressed 999 : STOP");
}