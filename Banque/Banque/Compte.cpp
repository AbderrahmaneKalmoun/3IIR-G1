#include "Compte.h"

Compte::Compte(int NumCompte, string NomProp, double Solde)
{
	this->NumCompte = NumCompte; 
	this->NomProp = NomProp; 
	this->Solde = Solde;
}



bool Compte::retirerArgent(double M)
{
	if (this->Solde < M)
	{
		return false;
	}
	else
	{
		this->Solde -= M;
		
		return true;
	}
	
}

void Compte::desposerArgent(double M)
{ 
	this->Solde += M;
}

void Compte::consulterSolde()
{
	cout << "\t\t\t\tVotre Solde Est :" << this->Solde <<"$" << endl;
}

bool Compte::transfererArgent(double M, Compte* R)
{ 
	if (this->retirerArgent(M))
	{ 
		R->desposerArgent(M);
		return true;
	}

	else
	{
		return false;
	}
}

Compte::~Compte()
{
	cout << "FIN" <<endl;
}
