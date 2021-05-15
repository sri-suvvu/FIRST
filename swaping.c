/*swaping of two arrays*/
#include<stdio.h>
void main()
{
	int i,temp;
	int arr1[4]={4,5,6,7};
	int arr2[4]={14,15,16,17};
	printf("\nthe elements in arr1:");
	for(i=0;i<4;i++)
	printf("%d\t",arr1[i]);
	printf("\nthe elements in arr2:");
	for(i=0;i<4;i++)
	printf("%d\t",arr2[i]);
	for(i=0;i<4;i++)
	{
		temp=arr1[i];
		arr1[i]=arr2[i];
		arr2[i]=temp;
	}
	printf("\nafter swaping of arrrays:");
		printf("\nthe elements in arr1:");
		for(i=0;i<4;i++)
	printf("%d\t",arr1[i]);
		printf("\nthe elements in arr2:");	
	for(i=0;i<4;i++)
	printf("%d\t",arr2[i]);

}
