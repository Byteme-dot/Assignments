//WAP to find Who & how many students have scored 99 in an array Marks.
#include<stdio.h>
void find_99(int num_std,int arr_std[]);
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
    find_99(num_std,arr_marks);
    return 0;
}
void find_99(int num_std,int arr_std[]){
    int count=0;
    for (int i=0;i<num_std;i++){
        if (arr_std[i]==99){
            printf("Student Number %d has scored 99\n",i+1);
            count++;
        }
    }
    printf("Number of Students who scored 99 are: %d\n",count);
}