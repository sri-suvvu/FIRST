/*sum of natural numbers using arrays*/
#include<stdio.h>
void main()
{
	int sum=0,i,n,arr[100];
	printf("enter the number:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		arr[i]=i+1;
		sum=sum+arr[i];
	}
	printf("\n sum=%d",sum);
}
