#include <iostream>
#include <ctime>
#include <cstdlib>

void afficherTableau(int taille){
    //definir les symboles possibles
    char symboles[]={ '~','M','^','.'};

    //generateur aleatoire des nombres 
    srand(time(0));

    //afficher le tableau
    for (int i=0; i<taille; i++){
        for(int j=0; j<taille; j++){
            //choisir un symbole aleatoire
            char symbole=symboles[rand()%4];
            //afficher le symbole
            std::cout <<symbole<<"";
        }
        std::cout<<std::endl;
    }

}

int main(){
    int taille;
    std::cout <<"entrez la taille de la carte"<<std::endl;
    std::cin>> taille;
    afficherTableau(taille);

    return 0;
}