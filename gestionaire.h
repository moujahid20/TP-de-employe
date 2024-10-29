#pragma once
#include "employe.h"
class gestionaire: virtual public employe
{
protected: 
	double salaire_hebdomodaire;
public:
	gestionaire(int id = 0, std::string nom = "", double taux_horaire=0.0, int nbr_h=0,double salaire_heb = 0.0);
	const double calculer_salaire() override;
	~gestionaire();
};

