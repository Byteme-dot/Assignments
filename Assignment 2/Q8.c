// WAP to find maximum & minimum score in the Marks array. 
#include<stdio.h>
void highest_lowest_checker(int num_std,int arr_marks[]);
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
    highest_lowest_checker(num_std,arr_marks);
    return 0;
}   
void highest_lowest_checker(int num_std,int arr_marks[]){
    int highest=arr_marks[0];
    int highest_std;
    int lowest=arr_marks[0];
    int lowest_std;
    for(int i=0;i<num_std;i++){
        if (highest<arr_marks[i]){
            highest=arr_marks[i];
            highest_std=i+1;
        }
        if (lowest>arr_marks[i]){
            lowest=arr_marks[i];
            lowest_std=i+1;
        }
    }
    printf("Student %d Scored the highest Marks = %d\nStudent %d scored the lowest Marks = %d",highest_std,highest,lowest_std,lowest);
}