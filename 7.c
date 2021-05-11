#include<stdio.h>
void main()
{
	int r,s,l,b,h,w,choice;
	float area;
	printf("enter 1 for the area of circle\n");
	printf("enter 2 for the area of traingle\n");
	printf("enter 3 for the area of rectangle\n");
	printf("enter 4 for the area of square\n");
	printf("enter any one");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nenter the radius of the circle:");
			scanf("%d",&r);
			area=3.14*r*r;
			break;
		case 2:
			printf("\nenter the b and h of the traingle :");
			scanf("%d %d",&b,&h);
			area=0.5*b*h;
			break;
		case 3:
			printf("\nenter the l and w of the rectangle:");
			scanf("%d %d",&l,&w);
			area=l*w;
			break;
		case 4:
			printf("\nenter the s of the square:");
			scanf("%d",&s);
			area=s*s;
			break;
	}
	printf("area is:%f",area);
}
