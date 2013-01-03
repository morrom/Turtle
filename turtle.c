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

    //comunicazione comandi alla tartaruga
    executeCommand(2, 0);
    executeCommand(6, 12);
    executeCommand(3, 12);
    executeCommand(5, 12);
    executeCommand(4, 12);
    executeCommand(1, 0);
    executeCommand(7, 0);
}

_point np(int x,int y)
{
    _point aPoint={x,y}; //un nuovo punto viene creato di default "NON" disegnato
    return aPoint;
}

void drawPoint (_point thePoint)
{
    matrix[thePoint.x][thePoint.y][0] = 1;
}

void executeCommand (int cmd, int opt)
{
    /*
     1 = alza la penna
     2 = abbassa la penna
     3 = gira a destra di "n" caselle (in questo caso viene considerato il parametro "opt")
     4 = gira a sinistra di "n" caselle (in questo caso viene considerato il parametro "opt")
     5, n = vai su di "n" caselle (in questo caso viene considerato il parametro "opt")
     6, n = vai giù di "n" caselle (in questo caso viene considerato il parametro "opt")
     7 = visualizza la matrice 50x50
     */

    switch (cmd)
    {
        case 1:
            turtle.pencildown = 0;
            break;

        case 2:
            turtle.pencildown = 1; //inizia a disegnare
            break;

        case 3: {
            while (opt--)
            {
                turtle.position = np(turtle.position.x+1, turtle.position.y);
                if (turtle.pencildown)
                    drawPoint(turtle.position);
            }
        }
            break;

        case 4: {
            while (opt--)
            {
                turtle.position = np(turtle.position.x-1, turtle.position.y);
                if (turtle.pencildown)
                    drawPoint(turtle.position);
            }
        }
            break;

        case 5: {
            while (opt--)
            {
                turtle.position = np(turtle.position.x, turtle.position.y-1);
                if (turtle.pencildown)
                    drawPoint(turtle.position);
            }
        }
            break;

        case 6: {
            while (opt--)
            {
                turtle.position = np(turtle.position.x, turtle.position.y+1);
                if (turtle.pencildown)
                    drawPoint(turtle.position);
            }
        }
            break;

        case 7:
            printFloor();
            break;

        default:
            printf("Comando non riconosciuto.\n");
            break;
    }
}

void printFloor ()
{
    printf("*** Percorso Tartaruga ***\n");

int y;
    for ( y = 0; y<50; y++)
    {
        printf("\n");
        int x;
        for (x = 0; x<50; x++)
        {
            if (matrix[x][y][0] == 0)
                printf(" ");
            else
                printf("*");
        }
    }
}
