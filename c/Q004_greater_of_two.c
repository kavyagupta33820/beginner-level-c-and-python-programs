/* Write a program to find the greater of two numbers. */
#include<stdio.h>

int main(){
   int num1,num2;
   printf("enter 2 numbers to check which one is larger:\n");
   scanf("%d\n%d",&num1,&num2);
   if(num1>num2){
       printf("%d is larger than %d",num1,num2);
   }else if(num1==num2){
       printf("both %d and %d are equal",num1,num2);
   }else{
       printf("%d is larger than %d",num2,num1);
   }
   return 0;
}
