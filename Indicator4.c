#include<stdio.h>
#include<string.h>
void main()
{
	char name[100];
	char *p;
	int n,i,count=0;
	p=&name;
	
	printf("Enter of String = ");
	gets(name);
	
	
	for(i=0;*(p+i)!=NULL;i++)
	{
		count++;
	}
	
	printf("Length OF String Using Pointer = %d",strlen(p));
}
