//WAP to count prime numbers in an array. 
#include<stdio.h>
void prime_finder(int num_std,int arr_data[]);
int main(){
    int num_std;
    printf("Enter No of data you want to input: ");
    scanf("%d",&num_std);
    if(num_std<2){
        printf("Enter More than 1 element in the array!!!");
    }else{
        int arr_data[num_std];
        for(int i=0;i<num_std;i++){
            printf("Entet data %d: ",i+1);
            scanf("%d",&arr_data[i]);
        }
        printf("\n");
        prime_finder(num_std,arr_data);
    }
    return 0;
}
int is_prime(int num) {
    if (num<=1){
        return 0;
    }
    for (int i=2; i<=num/2;i++) {
        if (num%i==0){
            return 0;   
        }
    }
    return 1;
}
void prime_finder(int num_std, int arr_data[]) {
    int count=0;
    for (int i=0;i<num_std;i++) {
        if (is_prime(arr_data[i])) {
            count++;
        }
    }
    printf("Number of Prime Numbers in the array = %d\n", count);
}
