/* Write a program to check whether a number is positive, negative or zero. */
#include<stdio.h>

int main(){
   int num;
   printf("enter a number to check whether it is positive,negative or zero: ");
   scanf("%d",&num);
   if(num>0){
       printf("number is positive");
   }else if(num==0){
       printf("number is 0");
   }else{
       printf("number is negative");
   }
   return 0;
}
