#include <stdio.h>
#include <math.h>

int main(void){
	int num1;
	int num2;

	printf("Enter first number: ");
	scanf("%d", &num1);

	printf("\nEnter second number: \n");
	scanf("%d", &num2);

	if(num1 == num2){
		printf("The two numbers are equal.\n");
	}//if
	else if(num1 < num2){
		printf("The first number is less than the second number.\n");
	}//else if
	else{
		printf("The first number is greater than the second number.\n");
	
	}//else
	return(0);
}//main
