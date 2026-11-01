/* Write a program to check whether a number entered by the user is even or odd. */
#include<stdio.h>

int main(){
    int num;
    printf("Enter a number to check whether it is odd or even: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("number is even");
    }else{
        printf("number is odd");
    }
    return 0;
}
