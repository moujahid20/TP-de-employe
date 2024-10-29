#pragma once
#include "commercial.h"
#include "gestionaire.h"
class gestionnaire_commercial:public commercial,public gestionaire
{
private:
	int id;
	double salaire;
public:
	gestionnaire_commercial(int id = 0, std::string nom = "", double taux_horaire = 0.0, int nbr_h = 0, double salaire_heb = 0.0, float commission = 0.0, int total = 0);
	const double calculer_salaire() override;
	~gestionnaire_commercial();

};

