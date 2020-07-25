/*
Author: Sean Frommelt
Purpose: challenge
Date: 04/07/2020
*/


#include <stdio.h>

_Bool checkWin(char moves[10])
{
    int conditions[24] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 4, 7, 2, 5, 8, 3, 6, 9, 1, 5, 9, 3, 5, 7};
    for (int i = 0; i < 24; i += 3)
    {
        if (moves[conditions[i]] == moves[conditions[i + 1]] && moves[conditions[i + 1]] == moves[conditions[i + 2]])
        {
            return 1;
        }
    }
    return 0;
}


_Bool isValidPlacement(int position, char move[10])
{
    if (position > 9 || position < 1 || move[position] == 'O' || move[position] == 'X')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

void drawBoard(char moves[10])
{
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", moves[1], moves[2], moves[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", moves[4], moves[5], moves[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c  \n", moves[7], moves[8], moves[9]);
    printf("     |     |     \n");
    printf("\n");
    return;
}

int main()
{
    int currentPlayer = 1;
    _Bool gameOver = 0;
    char moves[10] = {' ', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char playerChar = 'O';
    int position = 0;
    int winner = 0;

    while(gameOver == 0)
    {
        position = 0;

        playerChar = (currentPlayer == 1) ? 'O' : 'X';

        drawBoard(moves);

        printf("What is the next move player %d: ", currentPlayer);
        scanf("%d", &position);
        printf("\n");

        _Bool valid = isValidPlacement(position, moves);


        while (valid == 0)
        {
            printf("Please enter a valid position: ");
            scanf("%d", &position);
            printf("\n");
            valid = isValidPlacement(position, moves);
        }
        
        moves[position] = playerChar;

        gameOver = checkWin(moves);

        if (gameOver == 0)
        {
            currentPlayer = (currentPlayer == 1) ? 2 : 1;
        }
        else
        {
            winner = currentPlayer;
        } 
    }

    drawBoard(moves);

    printf("Player %d wins!", winner);

    return 0;
}