#include<stdio.h>
int main()
{
	int a[5],i,n;
	int key;
	int found=0;
	
	 printf("Enter the number of elements you want to enter : ");
	   scanf("%d",&n);
	
	 printf("Enter the array elements : ");
	   for(int i=0;i<n;i++)
        	{
	        	scanf("%d",&a[i]);
         	}
	
	 printf("Enter the element you want to find : ");
    	scanf("%d",&key);
	
    	for(i=0;i<n;i++)
		{
	    	if(a[i]==key)
	        	{
		      	printf("%d is found at position %d.\n",key,i);
		    	found=1;
	        	}
       	}
	    	if(found==0)
	          {
	 	        printf("%d is not found in an array ",key);
	          }
	return 0;
}