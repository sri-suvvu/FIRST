#include<stdio.h>
void main()
{
	unsigned int a;
	unsigned int *p;
	a=14;
	printf("address of a=%x\n",&a);
	printf("value of a=%d\n",a);
	p=&a;
	printf("after assiging 'a'address to pointer 'p'\n");
	printf("content of p=%d\n",*p);
	printf("value of p=%x\n",p);
	a=26;
		printf("after assiging 26 to variable'a'\n");
	printf("address of p=%x\n",&p);printf("the vaule of a through p=%d\n",*p);
	printf("address of a through p=%x\n",p);
	*p=35;
		printf("after assiging 35 to pointer variable\n");
	printf("address of a=%x\n",&a);
	printf("value of a=%d\n",a);
}
