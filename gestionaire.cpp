#include "gestionaire.h"

gestionaire::gestionaire(int id, std::string nom, double taux_horaire, int nbr_h, double salaire) :employe(id, nom, taux_horaire, nbr_h), salaire_hebdomodaire(salaire)
{
}

const double gestionaire::calculer_salaire()
{
    return taux_horaire*nbr_h + salaire_hebdomodaire;
}



gestionaire::~gestionaire()
{
}
