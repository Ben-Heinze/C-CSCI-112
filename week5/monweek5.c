#include<stdio.h>

int main(void){
	int *ip; //ip stands for integer pointer
	double *dp;
	char *cp;



	//---------------------------
	//only to get rid of warnings
	int n=5;
	double d=2.5;
	char c='a';
	//----------------------------


	ip = &n; //sets aside memory on stack 
	dp = &d;
	cp = &c;

	printf("ip's value is %p\n", ip);
	printf("dp's value is %p\n", dp);
	printf("cp's value is %p\n", cp);


        printf("ip points to:  %d\n", *ip);
        printf("dp points to:  %lf\n", *dp);
        printf("cp points to:  %c\n", *cp);


	return(0);

}
