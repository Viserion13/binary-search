#include<stdio.h>
void main()
{   int flag = -1, n, c, array[50], search; 
	printf("Enter number of elements\n");
   scanf("%d",&n);
 
   printf("Enter %d integers\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);
 
   printf("Enter value to find\n");
   scanf("%d", &search);
   
   for (c = 0; c < n; c++)
    {
    	if ( array[c]== search)
     {
		 	flag = c;
    	//printf("%d",c);
    	break;
	}
	}
	
	if (flag >= 0)
		{
		printf("The element is found at location %d",(flag+1));
	}
	else
	 printf("Element not found.");
}
