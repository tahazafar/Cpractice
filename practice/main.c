
   //Per esercizio 4
void path(
    int mat[3][3],
    int matSize,
    int r,
    int c,
    int visitedBest[3][3],
    int visited[3][3],
    int *pathSumMax,
    int pathSumCurrent,
    int *pathLenMax,
    int pathLenCurrent) //Metto i puntatori su pathSumMax e pathLenMax perchÃ¨ varia piÃ¹ volte, quindi con un puntatore evito meno operazioni in memoria da parte del processore
{
    int dx[8] = {-1, -1, -1, 0, 0, +1, +1, +1}; //Fisso gli offset secondo i quali mi posso muovere sulla matrice nei passaggi successivi(per le adiacenze)
    int dy[8] = {-1, 0, +1, -1, +1, -1, 0, +1};

    int i, v1, v2;

    if(r < 0 || r >= matSize || c < 0 || c >= matSize) //Se mi sono spostato in una cella fuori dalla portata della matrice
    {
        return;
    }

    if(visited[r][c] > 0) //Se sono in una cella giÃ  stata visitata non posso rivisitarla
    {
        return;
    }

    v1 = pathSumCurrent + mat[r][c];
    v2 = pathLenCurrent + 1;

    if(r == (matSize - 1) && c == (matSize-1)) //Sono arrivato all'ultima cella della matrice, quella dell'arrivo
    {
        matPrint(visited, matSize); //Stampo il percorso che ho fatto, non Ã¨ detto che sia il migliore
        fprintf(stdout, " --> %d %d\n", v1, v2);

    //Solo quando ho visitato tutta la matrice posso tirare le somme e vedere se ho trovato un percorso migliore
    if((v1 > *pathSumMax) || ((v1 == *pathSumMax) && (v2 < *pathLenMax))) //Se il valore v1 ha registrato una somma maggiore nel percorso oppure se la somma Ã¨ uguale ma ho trovato un percorso piÃ¹ corto
    {
        fprintf(stdout, "---> NEW BEST\n");

        *pathSumMax = v1;
        *pathLenMax = v2;
        matCopy(visitedBest, visited, matSize); //Copio nella matrice best la matrice che ho appena visitato
        visitedBest[r][c] = *pathLenMax;
    }

       return;
    }

    visited[r][c] = v2; //Segno nella matrice che mi tiene il percorso attuale v2, cosÃ¬ ho in ordine le celle visitate

    for(i = 0; i < 8; i++) //8 perchÃ¨ ho 8 direzioni possibili per la cella
    {
        path(mat, matSize, r+dx[i], c+dy[i], visitedBest, visited, pathSumMax, v1, pathLenMax, v2); //Ricorro basandomi sugli offset, perchÃ¨ posso spostarmi solo sugli adiacenti, inoltre passo i dati aggiornati di somma e lunghezza cosÃ¬ ad ogni giro li incremento e aggiorno sempre, ottenendo sempre il dato migliore
    }

    visited[r][c] = 0; //Rendo nuovamente la cella libera per il futuro

    return;

}

