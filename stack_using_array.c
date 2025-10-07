
/* ?3)- write a c program to impliment stack data structure using array with the following operations,
	1)- push
	2)- pop
	3)- Display
	4)- Exit
*/

#include <stdio.h>
#define max_size 10
int s[max_size],TOP= -1;
void push(int item)
{
	if(TOP >= max_size-1)
	{
		printf("stack is FULL\n");
	}
	else 
	{
		TOP = TOP+1;
		s[TOP] = item;
	}
}
void pop()
{
	if(TOP < 0)
	{
		printf("stack is EMPTY\n");
		
	}
	else
	{
		printf("The poped element is %d\n",s[TOP]);
		TOP=TOP-1;
	}
}
void display()
{
	if(TOP >= 0)
	{
		printf("stack Elements are:\n");
		for(int i = TOP; i >= 0; i--)
		{
		    printf("%d\n",s[i]);
		}
	}
	else
	{
		printf("Stack is empty! \n");
	}	
}

int main()
{
	int count=1, choice, value;
    	while (count==1) 
    	{
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		    case 1:
		        printf("Enter the value to push: ");
		        scanf("%d", &value);
		        push(value);
		        break;

		    case 2:
		        pop();
		        break;

		    case 3:
		        display();
		        break;

		    case 4:
		        printf("Exited...\n");
		        count++;
		        break;

		    default:
		        printf("Invalid choice! Please enter option 1-4.\n");
		}
        }
        
    	return 0;
}
	
	
