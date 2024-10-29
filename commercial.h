#pragma once
#include "employe.h"
class commercial:virtual public employe
{
protected: 
	float commission;
	int total_vente;
public:
	commercial(int id = 0, std::string nom = "", double taux_horaire=0.0, int nbr_h=0,float commission=0.0,int total=0);
	const double calculer_indemnite();
	const double calculer_salaire() override;
	~commercial();
};

