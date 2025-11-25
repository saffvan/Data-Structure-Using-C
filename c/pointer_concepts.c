#include<stdio.h>
int main()
{
	int num1;
	int *ptr;
	num1=10;
	printf("value of num1 is %d",num1); // 10
	ptr=&num1;
	printf("Address of num1 is %p",ptr); // 100
	printf("Address of num1 is %p",&num1); // 100
	*ptr=30;
	printf("value of num1 is %d",num1); // 30
	printf("value of num1 is %d",*ptr); // 30
	printf("%p",ptr); // 100
	printf("%p",&ptr) // 300
return 0;
}
