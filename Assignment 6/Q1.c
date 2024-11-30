#include<stdio.h>
int main(){
    char gameboard[3][3]={{'-','-','-'},{'-','O','-'},{'-','-','-'}};
    int count;
    for (int i=0;i<3;i++){
        for(int j=0;i<3;j++){            
            if (gameboard[i] == '-') {
                count=1;
            }else{
                count=0;
                }
            }
        }   
    while(count==1){
        char player1='X';
        char player2='O';
        printf("   1  2  3");
        printf("\n");
        for(int i=0;i<3;i++){
            printf("%d  ",i+1);
            for(int j=0;j<3;j++){
                printf("%c  ",gameboard[i][j]);
            }
            printf("\n");
        }
        for(int i=1;i<=8;i++){
            if (i%2==0){
                printf("Player 2, Enter the position x and y together:");
                scanf("%d%d",&x,&y);
            }
        }
    }
    return 0;
}