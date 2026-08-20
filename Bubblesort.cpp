#include<stdio.h>
int main()
{
	int a[10],i,j,temp;
	 printf("Enter 10 elements : ");
	 for(i=0;i<10;i++)
	 {
	 	scanf("%d",&a[i]);
	 }
	 for(i=0;i<10;i++)
	  {
		 for(j=0;j<10-1;j++)
		   {
		   	if(a[j]>a[j+1])
		   	 {
		   	 temp=a[j];
		   	 a[j]=a[j+1];
		   	 a[j+1]=temp;
		     }
		   }
		   
	  }
    printf("\nThe sorted form of elements entered :"); 	 
 
  for(j=0;j<10;j++){
       printf("\n%d",a[j]);
   }
       return 0;
	
}