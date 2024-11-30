//WAP to find a peak element which is not smaller than its neighbors. 
#include<stdio.h>
void peak_finder(int num_std,int arr_data[]);
int main(){
    int num_std;
    printf("Enter No of data you want to input: ");
    scanf("%d",&num_std);
    if(num_std<2){
        printf("Enter More than 1 element in the array!!!");
    }else{
        int arr_data[num_std];
        for(int i=0;i<num_std;i++){
            printf("Entet data %d: ",i+1);
            scanf("%d",&arr_data[i]);
        }
        printf("\n");
        peak_finder(num_std,arr_data);
    }
    return 0;
}   
void peak_finder(int num_std,int arr_data[]){
    int found=0;
    if (arr_data[0]>arr_data[1]){
        printf("Peak Element = %d\n",arr_data[0]);
        found=1;
    }
    for (int i=1;i<num_std-1;i++){
        if (arr_data[i-1]<arr_data[i] && arr_data[i+1]<arr_data[i]){
            printf("Peak Element = %d\n",arr_data[i]);
            found=1;
        }
    }
    if (arr_data[num_std-1]>arr_data[num_std-2]){
        printf("Peak Element = %d\n",arr_data[num_std-1]);
        found=1;
    }
    if (found==0){
        printf("Peak element not found");
    }
}