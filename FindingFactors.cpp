#include<stdio.h>
int main()
{
  int num,i;
    printf(" Enter any number : ") ;
    scanf("%d",&num);
    printf("The factors are:");
    for(i=1;i<=num;i++)
  {
  	if(num%i==0)
   printf(" %d,\t ", i) ;
  }
   return (0);  
}
