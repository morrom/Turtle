//turtle.c --> Programma Tartaruga

#include <stdio.h>

//struttura punti
typedef struct {
    int x,y;
} _point;

// struttura tartaruga
typedef struct {
    int pencildown;
    _point position;
} _turtle;

// dichiarazione funzioni utilizzate
//---------------------------------------
_point np(int x,int y);
void executeCommand (int cmd, int opt);
void printFloor ();
//---------------------------------------

// variabili globali
//---------------------------------------
//matrice 50x50
int matrix[50][50][1];
_turtle turtle;
//---------------------------------------

