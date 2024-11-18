//WRITE A PROGRAM TO CHECK WHETHER A NUMBER IS ARMSTRONG NUMBER.
#include<stdio.h>
#include<math.h>
int findlength(int);
int main(){
    int num1,num,length,a,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    length=findlength(num);
    printf("No of digits = %d",length);
    num1=num;
    for(int i=0;i<length;i++){
        a=num1%10;
        sum=sum+pow(a,length);
        num1=num1/10;
        printf("sum = %d\n",sum);
    }
    if (sum==num){
        printf("This is an Armstrong Number");
    }else{
        printf("This is not an Armstrong Number");
    }
    return 0;  
}
int findlength(int a){
    int len=0;
    if (a==0){
        return 1;
    }
    if (a<0){
        a=-a;
    }
    while (a>0){
        a=a/10;
        len++;
    }
    printf("Lol");
    return len;
}