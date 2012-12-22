Turtle - Esercizio 6.26 - C, Corso Completo di Programmazione, Deitel
======

Immaginate una tartaruga meccanica che girovaga in una stanza.
La tartaruga ha una penna in una delle due posizioni, alzata o abbassata.
La tartaruga traccia delle linee man mano che si muove con la penna abbassata;
quando questa è alzata si muove liberamente senza scrivere niente.

Implementazione
---------------

Utilizzate una matrice floor 50x50 e azzeratela. Leggete i comandi da
un vettore che li contenga. In ogni istante mantenete traccia della posizione
corrente della tartaruga e dello stato della penna (alzata o abbassata).
Supponete che la tartaruga cominci sempre dalla posizione 0,0 del pavimento
con la penna alzata.

Comandi
-------

1   Alza la penna
2   Abbassa la penna
3   Gira a destra
4   Gira a sinistra
5,n Avanza di n spazi
6   Visualizza la matrice
9   Fine dei dati

Output
------

Man mano che la tartaruga si muoverà con la penna abbassata imposterete
gli elementi corrispondenti della matrice floor a 1.
Nel momento in cui verrà impartito il comando 6 (visualizza) stamperete
un asterisco o qualsiasi altro carattere abbiate scelto in corrispondenza
di ogni 1 incluso nella matrice. Stamperete invece uno spazio in corrispondeza
di ogni 0.
