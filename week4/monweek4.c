#include <stdio.h>

int main(void){
	int digits[5];
	int num;

	//read in number call it num
	printf("Please type 5 digits: ");
	scanf(" %d", &num);
	
	for(int i=0;i<5;++i){
		digits[i] = num%10;
		num /= 10;

	}


	/*
	while(num>9){
		digits[i] = num %10;
		num /= 10;
		i++;
	}//while
	digits[i] = num
	*/
	//print using for loop
	

	for(int j = 4; j>=0; j--){
		//print each digit
		//printf("\n");
		printf(" %d", digits[j]); 
	}
	printf("\n");

	return(0);

}
