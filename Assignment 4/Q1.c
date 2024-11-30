#include<stdio.h>
#include <stdlib.h> 
#include <time.h>
int main(){
    int player=0,computer=0,end=1,choice,Draw;
    printf("-----ROCK -- PAPER -- SCISSOR-----\n");
    srand(time(0));
    while (player<2 && computer<2){ 
        int random_num = 1+rand()%3;    
        printf("\n");  
        printf("****Select Your Choice****\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("**************************\n");
        printf("Enter Your Choice: ");
        scanf("%d",&choice);
        printf("\n");    
        if(random_num==1){   // IF Computer kept ROCK
            if (choice==random_num){
                printf("It's a Draw. Both chose Rock.\n");
            }else if (choice==2){
                player++;
                printf("Player wins this round! Paper beats Rock.\n");
            }else if (choice==3){                
                computer++;
                printf("Computer wins this round! Rock beats Scissor.\n");               
                }            
            }       
        if(random_num==2){   // IF Computer kept Paper
            if (choice==random_num){
                printf("It's a Draw. Both chose Paper.\n");
            }else if (choice==1){
                computer++;
                printf("Computer wins this round! Paper beats Rock.\n");
            }else{
                player++;
                printf("Player wins this round! Scissor beats Paper.\n");              
            }       
        }
        if(random_num==3){   // IF Computer kept Scissor
            if (choice==random_num){
                printf("It's a Draw. Both chose Scissor.\n");
                printf("Its a Draw\n");
            }else if (choice==1){
                player++;
                printf("Player wins this round! Rock beats Scissor.\n");
            }else{
                computer++;
                printf("Computer wins this round! Scissor beats Paper.\n");               
            }       
        }
        printf("SCORE: \nPlayer: %d,\nComputer: %d\n", player, computer);                
    }
    if (player==2){
        printf("Congratulations! You won the game.\n");
    }else{
        printf("The computer won the game. Better luck next time!\n");
    }
    return 0;
}