#include <stdio.h>
#include <stdlib.h>
int main(void){

	FILE* fptr = fopen("/public/examples/chap7/wed_9-14_in.txt", "r");

	if(fptr == NULL){
		printf("File not found :(\n");
	}//if

	int arr[6][8];
	int num;
	int i=0;
	int j=0;

	while(fscanf(fptr, "%d", &num)==1){
		//puts number in the array
		if(num==0){
			arr[i++][j] = num;
			j=0;
		}
		else{	
			arr[i][j++]=num;
		}//else
	
	}//while loop

	fclose(fptr);

	int totalRows = i; //keeps track of how many arrays the program read
	int sum=0;

	for(int i=0; i< totalRows; ++i){
		for (j=0; j< 8; j++){
			if (arr[i][j] != 0){
				//print that one element
			
				sum+= arr[i][j];
			}//if
			else{
				printf("sum of the row %d is %d\n", i, sum);
				sum=0;
				break;
			}//else
		}//second for
	}//first for

return(0);
}//main
