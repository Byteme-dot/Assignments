//WAP to implement Insert -Front, any position in between & end in an array. Print the array before insert & after insert. 
#include <stdio.h>

void print_array(int arr[],int size){
    printf("[");
    for (int i=0;i<size;i++) {
        printf("%d,",arr[i]);
    }
    printf("]");
    printf("\n");
}

void insert_at_front(int arr[],int *size,int value){
    for (int i=*size;i>0;i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=value;
    (*size)++;
}

void insert_at_position(int arr[],int *size,int value,int position){
    for (int i=*size;i>position;i--) {
        arr[i]=arr[i-1];
    }
    arr[position]=value;
    (*size)++;
}

void insert_at_end(int arr[],int *size,int value){
    arr[*size]=value;
    (*size)++;
}

int main(){
    int choice;
    int arr[100], size, value, position;
    printf("Enter the number of elements: ");
    scanf("%d",&size);
    for (int i=0;i<size;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Array before insertion: \n");
    print_array(arr, size);
    printf("\n");
    printf("*************************\n");
    printf("1. Insert in front\n");
    printf("2. Insert in middle\n");
    printf("3. Insert in back\n");
    printf("*************************\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
    if (choice==1){        
        printf("Enter value to insert at the front: ");
        scanf("%d", &value);
        insert_at_front(arr, &size, value);
        printf("Array after inserting at the front: \n");
        print_array(arr, size);
    }else if (choice==2){        
        printf("Enter value to insert at a specific position: ");
        scanf("%d", &value);
        printf("Enter the position (0 to %d): ", size);
        scanf("%d", &position);
        insert_at_position(arr,&size,value,position);
        printf("Array after inserting at position %d: \n", position);
        print_array(arr, size);
    }else if (choice==3){    
        printf("Enter value to insert at the end: ");
        scanf("%d", &value);
        insert_at_end(arr, &size, value);
        printf("Array after inserting at the end: \n");
        print_array(arr, size);
    }else{
        printf("Enter a valid Choice !!!!");
    }
    return 0;
}
