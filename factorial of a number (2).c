//DEPARTMENT:ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:TOUFEEQ FAROOQ SOFI//
//ROLL NO.:ECE-22-22//
#include <stdio.h>
int main() {
	int a, i, fact;
	fact = 1;
	printf("Enter the integer for which u want a factorial :\n");
	scanf("%d", &a);
	if(a<0){
		printf("U entered a negative number");
	}
	else{
		for(i = 1; i <= a; ++i)
		{
			fact *= i;
		}
		printf("%d", fact);
	}
}
