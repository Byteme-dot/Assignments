// HANGMAN GAME 
#include<stdio.h>
#include <stdlib.h> 
#include <time.h>
void hangman(char word[],int length);
int main(){
    srand(time(0));
    int random_num = 1+rand()%10;
    char arr_1[4]={'q','u','i','z'};
    char arr_2[4]={'m','y','t','h'};
    char arr_3[4]={'j','i','n','x'};
    char arr_4[5]={'n','y','m','p','h'};
    char arr_5[5]={'g','l','y','p','h'};
    char arr_6[4]={'c','y','s','t'};
    char arr_7[4]={'w','i','s','p'};
    char arr_8[6]={'p','s','y','c','h','e'};
    char arr_9[5]={'f','j','o','r','d'};
    char arr_10[4]={'c','r','u','x'};
    switch (random_num){
    case 1:
        hangman(arr_1, sizeof(arr_1) / sizeof(arr_1[0]));
        break;
    case 2:
        hangman(arr_2, sizeof(arr_2) / sizeof(arr_2[0]));
        break;
    case 3:
        hangman(arr_3, sizeof(arr_3) / sizeof(arr_3[0]));
        break;
    case 4:
        hangman(arr_4, sizeof(arr_4) / sizeof(arr_4[0]));
        break;
    case 5:
        hangman(arr_5, sizeof(arr_5) / sizeof(arr_5[0]));
        break;
    case 6:
        hangman(arr_6, sizeof(arr_6) / sizeof(arr_6[0]));
        break;
    case 7:
        hangman(arr_7, sizeof(arr_7) / sizeof(arr_7[0]));
        break;
    case 8:
        hangman(arr_8, sizeof(arr_8) / sizeof(arr_8[0]));
        break;
    case 9:
        hangman(arr_9, sizeof(arr_9) / sizeof(arr_9[0]));
        break;
    case 10:
        hangman(arr_10, sizeof(arr_10) / sizeof(arr_10[0]));
        break;                                          
    default:
        break;
    }
    return 0;
}
void hangman(char word[],int length){
    char guess_word;
    int guesses=3,position,count=length;
    int guess_arr[length];
    for(int i=0;i<length;i++){
        guess_arr[i]='_';
    }
    printf("Your Chances = %d\n",guesses);
    while(guesses>0 && count>0){
        for (int i=0;i<length;i++){
            printf("%c ",guess_arr[i]);
        }
        printf("\n");
        printf("Enter Which Position you want to guess: ");
        scanf("%d",&position);
        printf("Enter your guess: ");
        scanf(" %c",&guess_word);     
        if (guess_word==word[position-1]){
            guess_arr[position-1]=guess_word;
        }else{
            guesses--;
            printf("Wrong Guesss !!\n");
            printf("Number of Chances Left = %d\n",guesses);
        }   
        count=0;
        for (int i = 0; i < length; i++) {
            if (guess_arr[i] == '_') {
                count++;
            }
        }
        printf("\n");
    }

    if (count == 0) {
        printf("Congratulations! You guessed the word: ");
        for (int i = 0; i < length; i++) {
            printf("%c", word[i]);
        }
        printf("\n");
    } else {
        printf("Game Over! The word was: ");
        for (int i = 0; i < length; i++) {
            printf("%c", word[i]);
        }
        printf("\n");
    }
}

