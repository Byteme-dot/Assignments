//WAP to find who scored first “99” in an array marks. 
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
    find_99(num_std,arr_marks);
    return 0;
}
void find_99(int num_std,int arr_std[]){
    for (int i=0;i<num_std;i++){
        if (arr_std[i]==99){
            printf("Student Number %d has first scored 99",i+1);
            break;
        }
    }
}