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

int main()
{
    //inizializzazione floor a 0
    int i,j;
    for( i = 0; i<50; i++)
        for( j = 0; j<50; j++)
            matrix[i][j][0] = 0; // tutti i punti non sono disegnati

    //inizializzazione tartaruga
    turtle.position=np(0,0);
    turtle.pencildown=0;  // matita alzata
