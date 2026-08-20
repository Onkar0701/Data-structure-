#include<stdio.h>
int main()
{
	int a[10],i,j,k,n;
	printf("\n Enter the no of elements you want to enter:");
	   scanf("%d",&n);
	printf("\n Enter the elements:");
	for(i=0;i<n;i++)
	   {
		scanf("%d",&a[i]);
    	}
    	
    for(i=0;i<n;i++)
      {
      	k=a[i];
		j=i-1;
		
	      while(j>=0 && a[j]>k)
	          {
	         	a[j+1]=a[j];
	          	j--;
	          }
	            a[j+1]=k;
     }
     for(i=0;i<n;i++)
   	 {
		printf("\n%d",a[i]);
 	 }
	printf("\nEnter element to add :");
	  scanf("%d",&k);
	   a[n]=k;
	   n++;
	printf("\nArray after adding :");
	 for(i=0;i<n;i++)
	  {
		printf("\n%d",a[i]);
	  }
	return 0;
}