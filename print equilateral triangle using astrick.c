//DEPARTMENT:ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:TOUFEEQ FAROOQ SOFI//
//ROLL NO.:ECE-22-22//
#include<stdio.h>
int main()
{
	int i, q, row, n;
	printf("Enter number of rows: \n");
	scanf("%d", &n);
	row=2*n;
	for(i=1;i<=row;i+=2)
	{
		for(q=row;q>i;q-=2)
		{
			printf(" ");
		}
	    for(q=1;q<=i;q++)
	    {
			printf("*");
		}
		for(q=row;q>i;q--)
		{
			printf(" ");
		}
		printf("\n");
	}
}
