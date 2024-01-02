#include<stdio.h>
void main()
{
	int a[100] ,n,i;
	int *p;
	p=&a[100];
	
	
	printf("Enter Size of Array = ");
	scanf("%d",&n);
	
	printf("Enter Array Element: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nElement Of Array: \n");
	for(i=0;i<n;i++)
	{
	  	p=&a[i];
		printf("%d ",*p);
	}
}