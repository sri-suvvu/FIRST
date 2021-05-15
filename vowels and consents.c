#include<stdio.h>
void main()
{
	char str[50];
	char *ptr=str;
	int v=0,c=0;
	printf("enter a string:");
	scanf("%[^\n]",str);
	while(*ptr!='\0')
	{
		if(*ptr=='A'|| *ptr=='E'|| *ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
		v++;
		else
		c++;
		ptr++;
	}
	printf("\n Number of vowels :%d\n Number of consonantes:%d",v,c);
}
