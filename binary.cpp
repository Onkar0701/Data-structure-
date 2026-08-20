#include <stdio.h>
int main()
{
    int a[500], i, key, n;
    int low, high, mid;

    printf("Enter the number of elements you want: ");
    scanf("%d", &n);

    printf("Enter array elements in sorted order:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a number to find: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;
     
    while(low <= high)
     {
       mid =(low + high)/ 2;
        if(a[mid] == key)
        {
            printf("Key %d is found at index %d",key,mid);
            return 0;
        }
        else if(a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
	}
       printf("Key is not found");
	    return 0;
}