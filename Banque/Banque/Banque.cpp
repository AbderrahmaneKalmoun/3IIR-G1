#include <iostream>

// Insértion de la class compte

#include "Compte.h"

// Utilisation du Namspace Std

using namespace std;



int main()
{
	Compte* ct1 = new Compte(12345, "SAID", 2000);

	Compte* ct2 = new Compte(56789, "AMINE", 1000);

	cout << "--> LE SOLDE DES DEUX COMPTES : "<<endl;

	ct1->consulterSolde();
	ct2->consulterSolde();

	cout << "--> LE SOLDE APRES RETRAIT : " << endl;

	ct1->retirerArgent(100);
	ct1->consulterSolde();
	ct2->consulterSolde();

	cout << "--> LE SOLDE APRES DEPOT : " << endl;

	ct1->desposerArgent(800);
	ct1->consulterSolde();
	ct2->consulterSolde();

	cout << "--> LE SOLDE APRES TRANSFERT : " << endl;

	ct1->transfererArgent(500, ct2);
	ct1->consulterSolde();
	ct2->consulterSolde();

	delete ct1;
	delete ct2;




}

