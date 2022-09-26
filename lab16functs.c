/** lab16functs.c
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 16
 * Purpose: 
 * ===========================================================
 */
#include <stdio.h>
#include <stdbool.h>

void print4SquareInt(const int arrayIntegers4x4[4][4]) {
    int i;
    int j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d", arrayIntegers4x4[i][j]);
        }
        printf("\n");
    }
}

bool hasUniqueElements4Square(const int arrayIntegers4x4[4][4]) {
    int i;
    int j;
    bool unique = true;
    int array1D[100];

    //Initilize array to 0s.
    array1D[0] = 0;
    array1D[0]+= 0;
    for (i = 0; i < 100; i++) {
        array1D[i] = 0;
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            array1D[(arrayIntegers4x4[i][j])] = array1D[(arrayIntegers4x4[i][j])] + 1;
        }
    }
    
    for (i = 0; i < 100; i++) {
        if (array1D[i] > 1) {
            unique = false;
        }
    }

    return unique;
}

bool isMagic4Square(const int arrayIntegers4x4[4][4]) {
    int i;
    int j;
    bool magic = true;
    int targetSumRow = 0;

    //Find first row total
    for (i = 0; i < 4; i++) {
        targetSumRow = targetSumRow + arrayIntegers4x4[0][i];
    }
    
    //Check rows
    for (i = 0; i < 4; i++) {
        int currentRow = 0;
        for (j = 0; j < 4; j++) {
            currentRow = currentRow + arrayIntegers4x4[i][j];
        }
        if (currentRow != targetSumRow){
            magic = false;
        }
    }
    
    //Check columns
    for (j = 0; j < 4; j++) {
        int currentColumn = 0;
        for (i = 0; i < 4; i++) {
            currentColumn = currentColumn + arrayIntegers4x4[i][j];
        }
        if (currentColumn != targetSumRow){
            magic = false;
        }
    }

    int diagonal1 = 0;
    //Check Diagonal 1
    diagonal1 = arrayIntegers4x4[0][0] + arrayIntegers4x4[1][1] + arrayIntegers4x4 [2][2] + arrayIntegers4x4[3][3];
    if (diagonal1 != targetSumRow) {
        magic = false;
    }

    int diagonal2 = 0;
    //Check Diagonal 2
    diagonal2 = arrayIntegers4x4[0][0] + arrayIntegers4x4[1][1] + arrayIntegers4x4 [2][2] + arrayIntegers4x4[3][3];
    if (diagonal2 != targetSumRow) {
        magic = false;
    }
    
    return magic;
}

char penteWinner(const char penteboard[19][19], int row, int column);