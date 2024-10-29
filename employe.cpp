#include "employe.h"

employe::employe(int id, std::string nom, double taux_horaire, int nbr_h):id(id),nom(nom),taux_horaire(taux_horaire),nbr_h(nbr_h)
{
}

employe::employe(employe& e)
{
    this->id = e.id;
    this->nbr_h = e.nbr_h;
    this->nom = e.nom;
    this->taux_horaire = e.taux_horaire;
}

const double employe::calculer_salaire() 
{
    
    return taux_horaire*nbr_h;
}
void employe::afficher()
{
    std::cout << "Nom : " << this->nom << " salaire : " << this->calculer_salaire() << std::endl;
}
employe::~employe()
{
}
