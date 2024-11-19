//pattern
/*
1
01
101
0101
10101
*/
#include<stdio.h>
int main(){
    for(int i=1; i<6; i++){
        for(int j=1; j<=i; j++){
            printf("%d", (i+j)%2);
        }
        printf("\n");
    }
    return 0;
}

