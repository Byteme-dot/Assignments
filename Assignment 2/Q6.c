// WAP to find average score of the Marks array. 
#include<stdio.h>
void avg_finder(int num_std,int arr_marks[]);
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
    avg_finder(num_std,arr_marks);
    return 0;
}        
void avg_finder(int num_std,int arr_marks[]){
    int sum=0;
    float avg;
    for (int i=0;i<num_std;i++){
        sum=sum+arr_marks[i];
    }
    avg=(float)sum/num_std;
    printf("The average = %.2f",avg);
}                                                                     