#include <stdio.h>

//passing by referece
int main(void){
	double a,b,c;
	void compute(double a, double b, double c,double *sum, double *average);

	printf("input 3 numbers:\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("\nentered: %.2lf, %.2lf, %.2lf.\n", a, b, c);


	//create variables to hold output
	double sum, avg;
			//& is the address of sum and average
	compute(a,b,c, &sum, &avg);
	printf("sum: %.2lf \n", sum);
	printf("avg: %.2lf\n", avg);
	return(0);
}
	

//pointers to sum and avg
void compute(double a, double b, double c,double *sum,double *avg){
	
	*sum = a+b+c;
	*avg = *sum/3;
}





