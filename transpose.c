#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],i,j;
	printf("enter the matrix A values :\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<3;i++)
    {
	
    for(j=0;j<3;j++)
    {
    	b[i][j]=a[j][i];
    	
	}
}
printf("The transpose of a matrix is :");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	printf("%4d",b[i][j]);
	printf("\n");
}
}

	

