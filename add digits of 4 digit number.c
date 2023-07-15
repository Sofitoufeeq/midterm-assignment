//ADDITION OF 4 DIGIT NUMBER//
//DEPARTMENT:ELECTRONICS AND COMMUNICATION ENGINEERING//
//NAME:TOUFEEQ FAROOQ SOFI//
//ROLL NO.:ECE-22-22//
#include<stdio.h>
int main()
{
	int number, digit, sum=0;
	printf("Enter any 4 digit number: \n");
	scanf("%d", &number);
	digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
    number /= 10;
    digit = number % 10;
    sum += digit;
	printf("%d is sum.",sum);
}
