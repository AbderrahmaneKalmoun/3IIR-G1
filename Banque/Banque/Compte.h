#pragma once
#include <iostream>

// Ins�rtion de la biblioth�que String

#include <string>

// Utilisation du Namspace Std

using namespace std;

class Compte
{
	private :
			int NumCompte;
			string NomProp;
			double Solde;
	public :
			Compte(int NumCompte, string NomProp, double Solde);

			bool retirerArgent(double M);

			void desposerArgent(double M);

			void consulterSolde();

			bool transfererArgent(double M, Compte* R);

			~Compte();



};

