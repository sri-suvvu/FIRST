#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,*ptr,sum=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
    	printf("No memory is allocated:");
    	exit(0);
	}
	printf("Enter the %d elements :",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("The sum of %d elements is %d",n,sum);
	free(ptr);
}
