// ?) write c programming to impliment sum of 'n' numbers using array?
//     logic :- 
/* 	1) array size(50)
   	2) get the value of 'n' , eg: 10 , error check n not greater than 50
	3) get 10 numbers from user and store it in the array.
	4) add 10 numbers in the array.
	5) print the result
*/

#include<stdio.h>
int main()
{
	int ary[50],i,j,n,sum=0;
	printf("Enter how much numbers sum you want (limit of size is 50) : ");
	scanf("%d",&n);
	if(n>50)
	{
		printf("you are reached the limit");
	}
	else 
	{
	
		printf("Enter the %d numbers: \n",n);
		for(i=0;i<n;i++)
		{

			scanf("%d",&ary[i]);
		}
		
		for(j=0;j<n;j++)
		{
			sum=sum+ary[j];
		}
		printf("sum of %d numbers = %d \n",n,sum);
		
	}
	return 0;
}
		
		
