//WAP to find sum of all scores in Marks array. 
#include<stdio.h>
void sum_of_marks(int num_std,int arr_marks[]);
int main(){
    int num_std;
    printf("Enter No of student's data you want to enter: ");
    scanf("%d",&num_std);
    int arr_marks[num_std];
    for(int i=0;i<num_std;i++){
        printf("Entet Student %d's Marks: ",i+1);
        scanf("%d",&arr_marks[i]);
    }
    printf("\n");
    sum_of_marks(num_std,arr_marks);
    return 0;
}        
void sum_of_marks(int num_std,int arr_marks[]){
    int sum=0;
    for (int i=0;i<num_std;i++){
        sum=sum+arr_marks[i];
    }
    printf("The total Sum = %d",sum);
}                                                                     