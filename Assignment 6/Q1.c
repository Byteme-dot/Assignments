#include <stdio.h>

void print_gameboard(char gameboard[3][3]);
int win_calculator(char gameboard[3][3], char player);
char gameboard[3][3] = {{'-', '-', '-'}, {'-', 'O', '-'}, {'-', '-', '-'}};
char empty = '-';
char player1 = 'X';
char player2 = 'O';

int main() {
    int count = 1;
    
    // Check for empty spaces
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {            
            if (gameboard[i][j] != player1 && gameboard[i][j] != player2) {
                count = 1;
                break;
            } else {
                count = 0;
            }
        }
    }

    while (count == 1) {
        print_gameboard(gameboard);

        for (int i = 1; i <= 9; i++) {
            int x, y;
            if (i % 2 == 0) {
                printf("Player 2, Enter the position x and y together: \n");
                scanf("%d%d", &x, &y);
                gameboard[x-1][y-1] = player2;
            } else {
                printf("Player 1, Enter the position x and y together: \n");
                scanf("%d%d", &x, &y);                
                gameboard[x-1][y-1] = player1;
            }
            print_gameboard(gameboard);

            // Check for winner
            if (win_calculator(gameboard, player1)) {
                printf("Player 1 Won the game!\n");
                return 0;
            } else if (win_calculator(gameboard, player2)) {
                printf("Player 2 Won the game!\n");
                return 0;
            }
        }

        // Check for empty spaces
        count = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (gameboard[i][j] == empty) {
                    count = 1;
                    break;
                }
            }
            if (count == 1) break;
        }

        if (count == 0) {
            printf("It's a draw!\n");
            return 0;
        }
    }

    return 0;
}

void print_gameboard(char gameboard[3][3]) {
    printf("   1  2  3\n");
    for (int i = 0; i < 3; i++) {
        printf("%d  ", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("%c  ", gameboard[i][j]);
        }
        printf("\n");
    }  
}

int win_calculator(char gameboard[3][3], char player) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (gameboard[i][0] == player && gameboard[i][1] == player && gameboard[i][2] == player) {
            return 1;
        }
    }
    // Check columns
    for (int i = 0; i < 3; i++) {
        if (gameboard[0][i] == player && gameboard[1][i] == player && gameboard[2][i] == player) {
            return 1;
        }
    }
    // Check diagonals
    if (gameboard[0][0] == player && gameboard[1][1] == player && gameboard[2][2] == player) {
        return 1;
    }
    if (gameboard[0][2] == player && gameboard[1][1] == player && gameboard[2][0] == player) {
        return 1;
    }
    return 0;
}
