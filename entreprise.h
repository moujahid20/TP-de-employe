#pragma once
#include <iostream>
#include "employe.h"
class entreprise
{
private:
	int id;
	employe** table_employe;
	int capacite;
	static int count;
public:
	entreprise(int capacite=2,int id=0);
	void afficher() const;
	void ajouter_employe(employe * E);
	~entreprise();

};

