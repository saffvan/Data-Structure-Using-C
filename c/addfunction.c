#include<stdio.h>
//int add(int,int);
int add(int num1,int num2)
{
	int result;
	result=num1 + num2;
	return(result);
}
int main()
{
	int num1,num2,result;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	result= add(num1,num2);
	printf("Result of addition is %d\n",result);

	return 0;
}
