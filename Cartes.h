#ifndef __CARTES__H__
#define __CARTES__H __


char **initGrid(unsigned int, unsigned int);
void generateGrid(char **, unsigned int, unsigned int, char *);
void printGrid(char **, unsigned int, unsigned int);
void writeOnfile(char **, unsigned int, unsigned int);


#endif