#include "entreprise.h"

int entreprise::count = 0;

entreprise::entreprise(int capacite,int id) : capacite(capacite), id(id) {
    table_employe = new employe * [capacite];
}

void entreprise::ajouter_employe(employe* E) {
    if (count < capacite) {
        table_employe[count++] = E;
    }
}

void entreprise::afficher() const {
    std::cout << "les employes de l'entreprise sont :" << std::endl;
    for (int i = 0; i < count; ++i) {
        table_employe[i]->afficher();
    }
}

entreprise::~entreprise() {
    delete[] table_employe;
}