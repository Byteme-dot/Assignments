// Write a program to convert binary to decimal and decimal to binary for a given number by user.
#include<stdio.h>
void Dec_Bin(int);
int Bin_Dec(long long int);
int powerf(int,int);
int main(){
    int choice,result;
    long long int x;
    printf("Enter a Number/Binary: ");
    scanf("%d",&x);
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("\nEnter Your Choice: ");
    scanf("%d",&choice);
    if (choice==1){
        Dec_Bin(x);
    }else if (choice==2){
        result=Bin_Dec(x);
        printf("%d",result);
    }else{
        printf("Invalid Choice !!!");
    }
    return 0;
}
void Dec_Bin(int a){
    int binary_num[32]={0},count=0,b;
    int i=31,j=32;
    while (a>0){
        binary_num[i]=a%2;
        a=a/2;
        count++;
        i--;
    }
    int by_four=count;
    while(by_four%4!=0){
        by_four++;
    }
    b=j-by_four;
    int seperate=0;
    while(b<j){
        if(seperate%4==0){
            printf(" ");
        }
        printf("%d",binary_num[b]);
        b++;
        seperate++;
    }
}
int Bin_Dec(long long a){
    int count=0,b;
    int sum=0;
    while (a>0){
        b=powerf(2,count);
        sum=sum+b*(a%10);
        a=a/10;
        count++;
    }
    return sum;
}
int powerf(int a, int b) {
    int result = 1;
    if (b == 0) {
        return 1;
    } else {
        for (int i=1;i<=b;i++) {
            result *= a;
        }
    }
    return result;
}