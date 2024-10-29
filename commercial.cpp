#include "commercial.h"

commercial::commercial(int id , std::string nom , double taux_horaire, int nbr_h , float commission , int total ):employe(id,nom,taux_horaire,nbr_h),commission(commission),total_vente(total)
{
}

const double commercial::calculer_indemnite()
{
    return commission*total_vente;
}

const double commercial::calculer_salaire()
{
    return calculer_indemnite() + nbr_h*taux_horaire;
}

commercial::~commercial()
{
}
