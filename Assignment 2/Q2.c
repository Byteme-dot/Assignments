//Write a program to take input marks and print there grade A >=75, B 74-60, C 59-40, D below 40
#include<stdio.h>
int main(){
    int no_std;
    printf("Enter the number of students: ");
    scanf("%d", &no_std);
    int arr[no_std];
    for(int i = 0; i < no_std;i++){
        printf("Enter student %d marks: ", i + 1);
        scanf("%d", &arr[i]);
    }    
    return 0;
}
void grading(){
    
}