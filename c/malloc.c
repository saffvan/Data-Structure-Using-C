#inclued<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	//*ptr=30; // 30 is not stored anywhere.. so it will work but not always get 30
	//printf("%d",*ptr);
	ptr= malloc(sizeof(int)) // sizeof() is a operator not function.. malloc() returns address.. so oru pointer variable il akuka..address of newly allocated space..
	*ptr=30;  // variable use cheyyathe 30 enna value ne store cheithu..
	
return 0;
}

// malloc() function ( variable use cheyyathe engane maemmory allocate cheyyam )- #include<stdlib.h> used
