#include <stdio.h>
//
// Ben Heinze,
// Lab 2, CSCI 112
// fall 2022
//
//


int main (void){
	int temp;
	int arr[10];
	int userInput=1;//has to be one to start the program
	int finalUserIn; //this keeps the users input for the end 
			 //so I can remove digits off of userInput.

	printf("Enter number to check (0 to end): ");
        scanf(" %d", &userInput);
	//printf("\n");

	while(userInput !=0){


		
		finalUserIn = userInput;

		int i=0; //increments through array
			 
		//---fills array-------------------------------------------------------------
		while(userInput!=0){ //this will loop until the
				     //it reaches the last number
				     //of the input.

			temp = userInput%10; //stores last digit in temp
			userInput /=10;	   //removes last digit from userIn
			arr[i] = temp; //
			i++;

		
		}
		int count = i;//tracks how many digits the user gave
		i=0;//resets increment for printing the individual numbers    


		//---adds the sum and prints each added digit--------------------------------
		int sum =arr[0];
		for(int j=count-1 ;j>0;j--){     
			printf("%d + ", arr[j]);
			sum+=arr[j];		
		}

		printf("%d = %d \n", arr[0], sum);


		//---checks sum divisibility-----------------------------------------------------------
		if((sum%9)==0){
			printf("Since %d is divisible by 9, %d is divisible by 9\n" , sum, finalUserIn);
		}//if the sum is divisible by 9.
		else{
		printf("Since %d is not divisible by 9, %d is not divisible by 9.\n", sum, finalUserIn);
		}//else	

		printf("Enter number to check (0 to end): ");
	        scanf(" %d", &userInput);
	//	printf("\n");


	}//while
	
	return(0);
}//main
