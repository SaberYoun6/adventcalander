#include<stdio.h>
#include<math.h>
#include"day1.h"

//this will do the math to solve the problem
int simple_math( int input){
	double answer;
	// first we are going to divided input by three
	answer = (double) input / 3;
	// then we get the floor of the answer 
	answer = floor(answer);
	// then we subtract two;
	answer = answer - 2;
	//return the value
	return (int) answer;
}
int complex_math(int input) {
	// function was created by sarahfossheim and encode into c 
	int total_fuel;
	total_fuel =0;

	while (1){
		//As long as the fuel is positive, keep calculationg
		input = simple_math(input);
		if (input > 0){
			total_fuel += input; 
		} else {
			break;
		}
	}

	return  total_fuel;
}


int main(){
	FILE *f = fopen("main.txt", "r");
	int number = 0;
	int sum = 0;

	while (fscanf(f,"%d\n", &number)>0)
	{
		sum1+=simple_math(number);
		sum+=complex_math(number);
	}
	
	fclose(f);
	printf("sm: %d\n cm: %d\n",sum);

	return 0;
}

