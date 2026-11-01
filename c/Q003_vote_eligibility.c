/* Write a program to check whether a person is eligible to vote. */
#include<stdio.h>

int main(){
   int age;
   printf("enter your age to check whether or not you are eligible to vote or not: ");
   scanf("%d",&age);
   if(age>=18){
       printf("you are eligible to vote");
   }else{
       printf("you are ineligible to vote");
   }
   return 0;
}
