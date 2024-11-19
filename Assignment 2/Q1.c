//Write a program to increase every student's mark by 5 and print the updated array
#include<stdio.h>

void insert(int num_std, int array[]);
void update_marks(int num_std, int array[]);

int main(){    
    int no_std;
    printf("Enter the number of students: ");
    scanf("%d", &no_std);
    int arr[no_std];
    printf("\n");
    insert(no_std, arr);
    printf("\nUPDATED MARKS");
    update_marks(no_std, arr);
    return 0;
}

void insert(int num_std, int array[]){
    for(int i = 0; i < num_std;i++){
        printf("Enter student %d marks: ", i + 1);
        scanf("%d", &array[i]);
    }
}
void update_marks(int num_std, int array[]){
    for(int i = 0; i < num_std;i++){
        array[i] += 5;
    }
    for(int i = 0; i < num_std;i++){
        printf("Student %d : %d\n", i + 1, array[i]);
    }
}
