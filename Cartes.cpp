#include "Cartes.h"
#include <iostream>
#include <ctime>
#include<fstream>

char **initGrid(unsigned int L, unsigned int l){
    char **Grid = new char*[l];
    if (!Grid)
    {
        std::cerr << "Erreur lors de l'initialisationde la grille" << std::endl;
    }
    for (unsigned int i = 0; i < l; i++)
    {
        Grid[i] = new char[L];
        if(!Grid[i]){
            std::cerr << "Erreur lors de l'allocation dynamique de Grid[i]" << std::endl;
            for (unsigned int j = 0; j < i; j++)
            {
                delete[] Grid[j];
            }
            delete[] Grid;
            return nullptr; 
        }
    }
    return Grid;
}

void generateGrid(char **Grid, unsigned int L, unsigned int l, char *t){

    srand(time(0));
    int index = 0;
    for (unsigned int i = 0; i < l; i++)
    {
        for (unsigned int j = 0; j < L; j++)
        {
            Grid[i][j] = t[rand() % 4];
        }   
    }
}

void printGrid(char **grid, unsigned int L, unsigned int l){

    for(unsigned int i = 0; i < l; i++)
    {
        for (unsigned int j = 0; j < L; j++)
        {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
void writeOnfile(char **grid, unsigned int L, unsigned int l){
    std::ofstream file("/mnt/c/Users/HP PC/Desktop/projet ahmed/file.txt");
    if(!file){
        std::cerr << "Erreur lors de l'ouverture du fichier" << std::endl;
        return;
    }
    file << "=========Ajout d'une nouvelle map==========";
    file << std::endl;
    for (unsigned int i = 0; i < l; i++)
    {
        for (unsigned int j = 0; j < L; j++)
        {
            file << grid[i][j] << " ";
        }
        file << std::endl;
    }
    file.close();
}