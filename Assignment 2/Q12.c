// WAP to implement delete-Front, any position in between & end in an array. Print the array before delete & after delete. 
#include <stdio.h>

void print_array(int arr[],int size){
    printf("[");
    for (int i=0;i<size;i++) {
        printf("%d,",arr[i]);
    }
    printf("]");
    printf("\n");
}

void delete_at_front(int arr[],int *size) {
    if (*size<=0) {
        printf("Array is already empty.\n");
        return;
    }
    for (int i=0;i<*size-1;i++) {
        arr[i]=arr[i+1];
    }
    (*size)--;
}

void delete_at_position(int arr[],int *size,int position) {
    if (position<0 || position>=*size){
        printf("Invalid position!\n");
        return;
    }
    for (int i=position;i<*size-1;i++){
        arr[i]=arr[i+1];
    }
    (*size)--;
}
void delete_at_end(int arr[],int *size){
    if (*size<=0){
        printf("Array is already empty.\n");
        return;
    }
    (*size)--;
}

int main(){
    int arr[100], size, position,choice;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    if (size<=0) {
        printf("Array must have at least one element.\n");
        return 0;
    }
    for (int i=0;i<size;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array before deletion: \n");
    print_array(arr, size);
    printf("\n");
    printf("*************************\n");
    printf("1. Delete from front\n");
    printf("2. Delete from middle\n");
    printf("3. Delete from back\n");
    printf("*************************\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    if (choice==1){        
        delete_at_front(arr, &size);
        printf("Array after deleting at the front: \n");
        print_array(arr, size);
    }else if (choice==2){    
        printf("Enter the position to delete (0 to %d): ", size - 1);
        scanf("%d", &position);
        delete_at_position(arr, &size, position);
        printf("Array after deleting at position %d: \n", position);
        print_array(arr, size);
    }else if (choice==3){       
        delete_at_end(arr, &size);
        printf("Array after deleting at the end: \n");
        print_array(arr, size);
    }else{
        printf("Enter a valid Choice !!!!");
    }
    return 0;
}
