#include<stdio.h>
void main()
{
	int arr[100],n,i,num,option,choice,pos,val,temp,count,j;
	void insert(int,int);
	printf("enter the size of an array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elements");
		scanf("%d",&arr[i]);
	}
	printf("enter the option for \n1.insert of array\n2.searching of array\n3.delete of array\n4.sorting assend\n5.sorting desend");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		{
			printf("enter the element to insert:");
			scanf("%d",&val);
			printf("enter the index:");
			scanf("%d",&pos);
			for(i=n-1;i>=pos;i--)
			{
			arr[i+1]=arr[i];
			arr[pos]=val;
			n++;
	     	}
			printf("\n enter the elements of an array after inserting new value: ");
			for(i=0;i<n;i++)
			printf("%d\t",arr[i]);
			break;
		}
	case 2:
		{
			printf("enter the element to search:");
			scanf("%d",&num);
			for(i=0;i<n;i++)
			{
				if(arr[i]==num)
				{
					count=1;
					printf("\n the %d vaule found at posistion %d",num,i);
				}
			}break;
		}
	case 3:
		{
		printf("enter the element to delete:");
			scanf("%d",&val);
			printf("enter the index:");
			scanf("%d",&pos);
			for(i=pos;i=n-1;i++)
			{
			arr[i]=arr[i+1];
			n--;
	     	}
			printf("\n enter the elements of an array after deleting: ");
			for(i=0;i<n;i++)
			printf("%d\t",arr[i]);	
			break;
		}
	case 4:
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			printf("\n sorted elements assending order of an array:");
				for(i=0;i<n;i++)
			printf("%d\t",arr[i]);
			break;	
		}
		case 5:
		{
			for(i=0;i<n;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j]<arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
					}
				}
			}
			printf("\n sorted elements desending order of an array:");
				for(i=0;i<n;i++)
			printf("%d\t",arr[i]);	
			break;
		}
}
}
