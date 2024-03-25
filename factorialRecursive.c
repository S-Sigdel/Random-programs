#include<stdio.h>
void newLine(){
	printf("\n====================\n");
	}
//global var to store factorial: fact
int fact = 1;
int selfMultiply(int numberFact){
	if(numberFact){
	fact*=numberFact;
	numberFact-=1;
	selfMultiply(numberFact);
	}
	else return 0;
}

void main(void){
	int inputNumber;
	newLine();
	printf("Enter the number to get Factorial");
	newLine();
	scanf("%d", &inputNumber);
	selfMultiply(inputNumber);
	newLine();
	printf("The factorial is: %d \t \n", fact);
	}

