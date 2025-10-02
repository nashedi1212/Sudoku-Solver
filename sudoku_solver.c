#include <stdio.h>

int main(){

    int puzzle[9][9];
    int i=0,j=0;

    //sudoku question
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            scanf("%d", &puzzle[i][j]);
            printf("%d ", puzzle[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    
    



    return 0;
}