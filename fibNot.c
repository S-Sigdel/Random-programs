#include<stdio.h>
int check(int i, int upto, int* a){
	for(int j=0; j<upto; j++){
		if(i==a[j]){
		return 0;
		}
	}
	return 1;
}
void newLine(){

	printf("\n ====================================================== \n");
}
int main(){
	printf("Enter the number of terms upto which you want to get fibbonachi series");
	int upto, currentNumber=0,beforeNumber=1,sum;
	scanf("%d", &upto);
	//declare an array to store the numbers in the series
	int a[upto];
	newLine();
	printf("Printing Fibo Series");
	newLine();
	for(int i=0; i<upto; i++){
		sum = currentNumber+beforeNumber;
		beforeNumber=currentNumber;
		currentNumber=sum;
		//print fibo series
		printf("\t %d", sum);
		//store the sum in the index of the array as the loop sets
		*(a+i)=sum;
	}
	newLine();
	printf("Printing anti-Fibo Series");
	newLine();
	//run a loop to compare till the end value stored in the last index of the array
	int checkedBool; //not using stdbool for this

	for(int i=0; i<=(*(a+upto-1));i++){
		checkedBool=check(i,upto,a);	
		if(checkedBool){
			printf("\t %d", i);
		}

	}

}
