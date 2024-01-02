#include<stdio.h>
main()
{
	int a,b;
	int *p1 ,*p2;
	
	p1=&a;
	p2=&b;
	
	
	printf("Enter Aalue A = ");
	scanf("%d",&a);
	printf("Ener Value B = ");
	scanf("%d",&b);
	
	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;
	
	printf("Swapping Value A And B: \n");
	printf("Vlaue Of A = %d\n",*p1);
	printf("Value Of B = %d\n",*p2);
	
}