#include<stdio.h>
int main()
{
	int a[10],i,j,min,temp;
	 printf("Enter 10 elements : ");
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<10;i++)
	 {
	 	min=i;
	 	for(j=i+1;j<10;j++)
	 	{
	 		if(a[j]<a[min])
	 		{
	 			min=j;
	 		}
	 	}
	 			temp=a[i];
	 			a[i]=a[min];
	 			a[min]=temp;
			 
		 
     }	
	 printf("\nThe sorted form of elements entered :"); 	 
        for(i=0;i<10;i++)
          printf("\n%d",a[i]);
       return 0;	
}