// ?)- Merge Two sorted arrays ?
/* logics 
	1- accept values to array 1 from user.
	2- accept values to array 2 from user
	3- check size is < declared size of array
	4- sort array 1 & 2 using function
	5- merge array 1 & 2 using function
	6- sort array 3 the new array and display.. 
	7- Display using function
	
*/

#include<stdio.h>

//Display array function
void display_array(int ary[], int sze)
{
	printf("Array elements are: \n");
	for(int i=0;i<sze;i++)
	{
		printf("%d \n",ary[i]);
	}
}

// sort array function
void sort(int ary[],int sze)
{
	for(int i=0;i<sze;i++)
	{
		for(int j=i+1;j<sze;j++)
		{
			if(ary[i] > ary[j])
			{
				int temp = ary[i];
				ary[i] = ary[j];
				ary[j] = temp;
			}
		}
	}

}

//merge array function
void merge_array(int ary1[], int ary2[], int ary3[], int sze1, int sze2)
{
	int i;
	for(i=0; i<sze1; i++)
	{
		ary3[i]=ary1[i];
	}
	for(int j=0; j<sze2; j++)
	{
		ary3[i]=ary2[j];
		i++;
	}
	/*
	for(int i=0;i<m;i++)
	{
	ary3[i]=ary1[i]
	}
	for(int i=0;i<n;i++)
	{
	ary3[i+m]=ary2[i];
	}
	*/
			
}
		


int main()
{
	int ary1[100],ary2[100],ary3[200],n1,n2;
	
	//array 1
	printf("Enter the size of array 1 (max size = 100 ) : ");
	scanf("%d",&n1);
	if(n1>100)
	{	
		printf("you are reached the limit ");
	}
	else
	{
		printf("Enter the %d elements of array 1 : \n",n1);
		for(int i=0;i<n1;i++)
		{
			scanf("%d",&ary1[i]);
		}
		display_array(ary1,n1);
		
	}
	
	//array 2
	printf("Enter the size of array 2 (max size = 100 ) : ");
	scanf("%d",&n2);
	if(n2>100)
	{	
		printf("you are reached the limit ");
	}
	else
	{
		printf("Enter the %d elements of array 2 : \n",n2);
		for(int j=0;j<n2;j++)
		{
			scanf("%d",&ary2[j]);
		}
		display_array(ary2,n2);
	}
	
	// sorted Arrays
	printf("Array 1 after sorting : \n");
	sort(ary1,n1);
	display_array(ary1,n1);
	
	printf("Array 2 after sorting : \n");
	sort(ary2,n2);
	display_array(ary2,n2);
	
	//merge two sorted arrys
	printf("Two Arrays after Merging: \n");
	merge_array(ary1,ary2,ary3,n1,n2);
	display_array(ary3,n1+n2);
	printf("Merged array after sorting: \n");
	sort(ary3,n1+n2);
	display_array(ary3,n1+n2);
	
	
	
	return 0;
}
	
	
	
	
	
	
	
