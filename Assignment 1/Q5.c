// Write a programt to find the perfect number
#include<stdio.h>
#include<math.h>
int main(){
    int num,sum=0;
    printf("Enter a Number: ");
    scanf("%d",&num);
    for (int i=1;i<=num/2;i++){
        if(num%i==0){
            sum=sum+i;
        }
    }
    if (sum==num){
        printf("It is a Perfect Number :)");
    }else{
        printf("Its not a Perfect Number :(");
    }
    return 0;
}