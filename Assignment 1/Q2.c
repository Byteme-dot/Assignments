// Write a program to input 2 numbers and find there HCF
#include<stdio.h>
int main(){
    int num1,num2,a;
    printf("Enter Number 1: ");
    scanf("%d",&num1);
    printf("Enter Number 2: ");
    scanf("%d",&num2);
    if (num1>num2){
        a=num2;
    }else{
        a=num1;
    }
    for (int i=a;;i--){
        if (num1%i==0 && num2%i==0){
            printf("HCF of %d and %d = %d",num1,num2,i);
            break;
        }
    }
    return 0;
}