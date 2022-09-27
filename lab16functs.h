/** lab16functs.h
 * ===========================================================
 * Name: Benjamin Tat
 * Section: T6
 * Project: Lab 16
 * Purpose: 
 * ===========================================================
 */
#ifndef LAB15FUNCTS_H
#define LAB15FUNCTS_H

#include <stdbool.h>

/**
* @brief The function will display the values of a 4x4 2-D integer 
         array. Each number in the array should take up 4 characters.
* @param arrayIntegers4x4 a 4x4 array of integers.
* @return This function does not return anything.
* @pre N/A
* @post N/A
*/
void print4SquareInt(const int arrayIntegers4x4[4][4]);

/**
* @brief The function will determine if all of the numbers in 
         the array are unique.
* @param arrayIntegers4x4 a 4x4 array of integers.
* @return This function returns true if each value in the array is 
          unique, and false if two or more numbers are the same.
* @pre N/A
* @post N/A
*/
bool hasUniqueElements4Square(const int arrayIntegers4x4[4][4]);

/**
* @brief Checks the array if it forms a magic square.
* @param arrayIntegers4x4 a 4x4 array of integers.
* @return This function returns true (1) if the array's values form a 
          magic square, and false(0) otherwise.
* @pre N/A
* @post N/A
*/
bool isMagic4Square(const int arrayIntegers4x4[4][4]);

/**
* @brief This function will look in all directions to see if the player 
         at the specified row and column has won.
* @param penteboard A pente board (i.e., a 19x19 array of characters)
* @param row A row (an integer)
* @param column A column (an integer)
* @return The program will return either:
          The character of the player that won OR
          A space (' ') if no player has won
* @pre N/A
* @post N/A
*/
char penteWinner(const char penteboard[19][19], int row, int column);

#endif