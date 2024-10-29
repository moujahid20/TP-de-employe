#include "gestionnaire_commercial.h"



gestionnaire_commercial::gestionnaire_commercial(int id, std::string nom, double taux_horaire, int nbr_h, double salaire_heb, float commission, int total):employe(id,nom,taux_horaire,nbr_h)
{
    salaire_hebdomodaire = salaire_heb;
    total_vente = total;
}

const double gestionnaire_commercial::calculer_salaire()
{
    this->salaire = commercial::calculer_salaire();
    this->salaire += gestionaire::calculer_salaire();
    return salaire;
}

gestionnaire_commercial::~gestionnaire_commercial()
{
}
