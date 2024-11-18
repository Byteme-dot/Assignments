//Print pascal's triangle
#include <stdio.h>

void printPascalsTriangle(int n) {
    for (int line=0;line<n;line++){
        int value=1;
        for (int space=1;space<=n-line; space++)
            printf(" ");
        for (int j=0;j<=line;j++) {
            printf("%d ",value);
            value=value*(line-j)/(j+1);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printPascalsTriangle(rows);
    return 0;
}
