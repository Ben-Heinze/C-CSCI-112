#include <stdio.h>
#include <math.h>

int main(void){
	double cost;
	char hasID;
	double total;
	double tax;
	
	printf("Cost of purchase: \t\t\t$");
	scanf(" %lf", &cost);//reads cost
	
	printf("In military (y or n)?\t\t\t");
	scanf(" %c", &hasID);//reads character

	//options for hasID
	switch(hasID){
		case 'y'://if either Y, give 20 percent and print
		case 'Y':
			if(cost >= 200){
				total = .80*cost;
				printf("Military discount (20%%)\t\t\t");
				printf("$%.2lf\n",(cost*.2));
				printf("Discounted total\t\t\t$%.2lf\n", total);

			}//if 
			else{ //if under 200, give 15 percent 
				total = .85*cost;
				printf("Military discount (15%%)\t\t\t");
				printf("$%.2lf\n",(cost*.15));
				printf("Discounted total\t\t\t$%.2lf\n", total);

			}//else
			break;
		case 'n':
		case 'N'://if no, total = cost
			total = cost;
			break;
		default:
			printf("\nError: bad input.\n");//tells user that input is invalid and ends program.
			return(0);
		}//switch
		 
	tax = total*.06;

	printf("Sales tax (6%%)\t\t\t\t$");
	printf("%.2lf \n",tax);
	
	total = (total+tax);//adds tax


	printf("Total: \t\t\t\t\t$%.2lf\n", total);


	return (0);//ends program
}//main
