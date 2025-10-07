
/* ?4)- write a c program to impliment Queue data structure using array with the following operations,
	1)- Enqueue
	2)- Dequeue
	3)- Display
	4)- Exit
*/

#include <stdio.h>
#define max_size 10
int Q[max_size],REAR= -1,FRONT= -1;
void enqueue(int item)
{
	if(REAR >= max_size)
	{
		printf("Queue is full! \n");
	}
	else 
	{
		if(FRONT == -1 && REAR == -1)
		{
			FRONT=0;
		}
		
		REAR = REAR+1;
		Q[REAR] = item;
	}
}
void dequeue()
{
	if(FRONT < 0)
	{
		printf("Queue is empty! \n");
		
	}
	else
	{
		printf("The dequeued element is %d\n",Q[FRONT]);
		
		if(FRONT == REAR)
		{
			FRONT = -1;
			REAR = -1;
		}
		else
		{
			FRONT = FRONT + 1;
		}
	}
}
void display()
{
	if(FRONT >= 0)
	{
	
		printf("Queue elements are:\n");
		for(int i = FRONT; i <= REAR; i++)
		{
		    printf("%d\n",Q[i]);
		}
	}
	else
	{
		printf("Queue is empty! \n");
	}	
}

int main()
{
	int count=1, choice, value;
    	while (count==1) 
    	{
		printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		    case 1:
		        printf("Enter the value to Enqueue: ");
		        scanf("%d", &value);
		        enqueue(value);
		        break;

		    case 2:
		        dequeue();
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
	
	
