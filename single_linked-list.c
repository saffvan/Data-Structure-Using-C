#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

struct node *header = NULL;

void insertAtFront(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL)
    {
        header = newnode;
    }
    else
    {
        newnode->link = header;
        header = newnode;
    }
}

void traverse()
{
    struct node *ptr;
    ptr = header;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }
}

void insertAtEnd(int item)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = item;
    newnode->link = NULL;

    if (header == NULL) 
    {
        header = newnode;
    }
    else
    {
        struct node *ptr;
        ptr = header;
        while (ptr->link != NULL) 
        {
            ptr = ptr->link;
        }
        ptr->link = newnode;
    }
}

void insertAtAny(int key, int item)
{
    struct node *ptr = header;
    struct node *prev = NULL;
    struct node *newnode;
    
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            newnode = (struct node*)malloc(sizeof(struct node));
            newnode->data = item;
            newnode->link = ptr;

            if (prev == NULL)
            {
                header = newnode;
            }
            else
            {
                prev->link = newnode;
	    }
            return;
        }
        prev = ptr;
        ptr = ptr->link;
    }
    printf("Key %d not found. Insertion not possible.\n", key);
}

void deleteAtFront()
{
	struct node *ptr;
	if(header == NULL)
	{
		printf("Empty List. Deletion not possible");
	}
	else
	{
		ptr = header;
		header = header -> link;
		free(ptr);
	}
}

void deleteAtEnd()
{
	struct node *ptr , *ptr1;
	if(header == NULL)
	{
		printf("Empty List. Deletion not possible");
	}
	else
	{
		while(ptr -> link != NULL)
		{
			ptr1 = ptr;
			ptr = ptr -> link;
		}
		ptr1 -> link = NULL;
		free(ptr);
	}
}

void deleteAtAny(int key)
{
	struct node *ptr, *ptr1;
	ptr = header;
	ptr1 = NULL;
	
	while(ptr != NULL && ptr -> data != key)
	{
		ptr1 = ptr;
		ptr = ptr -> link;
	}
	if(ptr == NULL)
	{
		printf("Key Not found, Deletion not possible");
	}
	else
	{
		printf("Deleted element is %d", ptr -> data);
		if(ptr1 != NULL)
		{
			ptr -> link = ptr -> link;
		}
		else
		{
			header = ptr -> link;
		}
		free(ptr);
	}
}
	
int main()
{
    insertAtFront(10);
    insertAtFront(20);
    insertAtFront(30);
    insertAtFront(40);
    insertAtAny(40, 350);
    insertAtEnd(12);

    printf("Linked list elements:\n");
    traverse(); 

    return 0;
}
