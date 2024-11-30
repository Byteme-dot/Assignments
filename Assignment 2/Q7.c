//WAP to check whether score is even or odd in an array
#include<stdio.h>
void even_odd_checker(int num_std,int arr_marks[]);
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
    even_odd_checker(num_std,arr_marks);
    return 0;
}        
void even_odd_checker(int num_std,int arr_marks[]){
    for (int i=0;i<num_std;i++){
        if (arr_marks[i]%2==0){
            printf("Student %d's marks are even\n",i+1);
        }else{
            printf("Student %d's marks are odd\n",i+1);
        }
    }
}                                                                     