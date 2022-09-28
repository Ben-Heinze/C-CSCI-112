#include <stdio.h>

int main(void){	
	void readFile();//declares 
	readFile();
	return(0);
}


void readFile(){
	void display(char answerKey[], int numOfQuestions); //declares function
		

	char answerKey[10];	//stores each character in this array
	int numOfQuestions; 	//reads first int (which is the amount of questions in the test


	//opens file
	FILE* fptr = fopen("/public/lab3/exam.txt", "r");
	fscanf(fptr, "%d", &numOfQuestions);//loads numOfQuestions
	
	
	//loads array with answer key	
	for(int i =0; i< numOfQuestions; i++){
		fscanf(fptr, "%c", &answerKey[i]);

		//it kept loading the space in index 0 so I set back i when it encounters one
		if(answerKey[i] == ' '){
			i--;
		}	
	}

	display(answerKey, numOfQuestions);
	printf("ID \t Grade(%%)\n");

//==========================================================
//                        Grading                         ||
//==========================================================
	int id; //students ids
	int missed[10] = {0}; // tracks which questions were missed

	char cmp; //iterates through student answers

	while(fscanf(fptr, "%d", &id)!=EOF){ //loops until it finds end of file (EOF)

		printf("%d", id);//prints id
		printf("\t");

		double correct=0;//counts how many questions a student got correct

		//reads student answers
		for(int i = 0; i< numOfQuestions; i++){ //loops per amount of questions
			fscanf(fptr, "%c", &cmp);	//scans each char in student answer
			if(cmp == ' '){
				i--;
			}
			
			//compares student answer to answer key	
			else if(cmp != answerKey[i]){
				missed[i]++;//add one to that incorrect answer
			}
			
			//increments student score
			else{
				correct++;			
			}
		}//for	

		
		//gets fraction and turns it into percent


		double grade =  (correct/(double) numOfQuestions)*100;




//==========================================================
//                    Printing Results                    ||
//==========================================================

		printf("%.2lf", grade);
		printf("\n");
		correct=0;
	}//while


	//prints question number
	printf("Question: \t\t");
	for(int i=0; i< numOfQuestions; i++){
		printf("%d ", i+1);
	}
	printf("\nMissed by:\t\t");

	//print how many missed that question
	for(int i=0; i< numOfQuestions; i++){
		printf("%d ", missed[i]);
	}
	printf("\n");

	fclose(fptr); //closes file
}//readFile




//=================================================================
//                         Display                               ||
//=================================================================
//displays the answers and their corresponding number.
void display(char answerKey[], int numOfQuestions){

	printf("Question:\t\t");

	//prints the number
	for(int i =0; i<numOfQuestions; i++){
		printf("%d ", i+1);
		
	}

	printf("\nAnswers:\t\t");


	//prints the letter
	for(int i =0; i<=numOfQuestions;i++){
		printf("%c ",answerKey[i]);
	}
	printf("\n");
}





































/*
void grade(char charArray[], int numOfQuestions){
	//int qsMissed[10];
	//char compare; //this is used to compare the students answers to charArray
	int id;


	FILE* fptr = fopen("/public/lab3/exam.txt", "r");
	

	fscanf(fptr,"%d", &id);
	while(fscanf(fptr,"%d", &id)!=0){
		printf("%d", id);

		for(int i=0;i<numOfQuestions; i++){
			fscanf(fptr, "%c", &charArray[i]);
		}//loops and prints the students answers

		id = 0;
	}

	fclose(fptr);//closes file

	//calculate grade
	//report how many times a question was missed

}
	
*/

