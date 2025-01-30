#include <iostream>
#include "Cartes.h"

int main(){
    char Ground[4] = {'~', 'M', '.', '^'};

    unsigned int l = 10;
    unsigned int L = 10;

    char **Grid = initGrid(l, L);
    generateGrid(Grid, l, L, Ground);
    printGrid(Grid, l, L);
    writeOnfile(Grid, l, L);

}