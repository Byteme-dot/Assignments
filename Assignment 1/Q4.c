// Write a program to swap two numbers using 4 different methods
#include<stdio.h>
void method1(int,int);
void method2(int,int);
void method3(int,int);
void method4(int,int);
int main(){
    int num1,num2,choice;
    printf("Enter Number 1: ");
    scanf("%d",&num1);
    printf("Enter Number 2: ");
    scanf("%d",&num2);
    printf("1. Method One\n");
    printf("2. Method Two\n");
    printf("3. Method Three\n");
    printf("4. Method Four\n");
    printf("\nEnter Your choice: ");
    scanf("%d",&choice);
    if (choice==1){
        method1(num1,num2);
    }else if (choice==2){
        method2(num1,num2);
    }else if (choice==3){
        method3(num1,num2);
    }else if (choice==4){
        method4(num1,num2);
    }else{
        printf("Enter a valid choice !!!");
    }       
    return 0;
}
void method1(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Number 1 = %d\n",a);
    printf("Number 2 = %d\n",b);
}
void method2(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Number 1 = %d\n",a);
    printf("Number 2 = %d\n",b);    
}
void method3(int a,int b){
    a=a^b;
    b=a^b;
    a=a^b;
    printf("Number 1 = %d\n",a);
    printf("Number 2 = %d\n",b);
}
void method4(int a,int b){
    a=a*b;
    b=a/b;
    a=a/b;
    printf("Number 1 = %d\n",a);
    printf("Number 2 = %d\n",b);
}