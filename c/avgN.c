#include <stdio.h>
int main()
{
	int i=0,n;
	float avg,sum=0;
	printf("enter the limit of avg number: ");
	scanf("%d",&n);
	do
	{
		
		sum=sum+i;
		i++;
		
	
	}while(i<=n);
	avg=sum/n;
	printf("average of first %d numbers is %.2f",n,avg);
	return 0;
	
}
		
