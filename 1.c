#include<stdio.h>
int big(int,int,int,int);
main()
{
	int a,b,c,d;
	printf("\n enter any 4 numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	big(a,b,c,d);
}
big(int x,int y,int z,int q)
{
	int max;
	max=x;
	if(y>max)
	max=y;
	if(z>max)
	max=z;
	if(q>max)
	max=q;
	printf("the largest number is %d",max);
	
}
