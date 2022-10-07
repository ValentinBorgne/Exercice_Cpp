#include <iostream>
#include "pile-entier.h"
#include <conio.h>


void pile_entier::empile(int valeur) {
	pile[hauteur] = valeur;
	hauteur = hauteur - 1;
}

int pile_entier::depile() {
	int a = pile[hauteur];
	std::cout << "le dernier chiffre est " << pile[hauteur] << std::endl;
	return a;
}