#pragma once
#include <iostream>
class employe
{
protected:
	int id;
	std::string nom;
	double taux_horaire;
	int nbr_h;
public:
	employe(int id = 0, std::string nom = "", double taux_horaire=0.0, int nbr_h=0);
	employe(employe& e);
	virtual const double calculer_salaire() ;
	void afficher();
	~employe();
};

