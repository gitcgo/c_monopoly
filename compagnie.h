#ifndef COMPAGNIE_H_
#define COMPAGNIE_H_
#include "de.h"
#include "propriete.h"

class compagnie: public propriete {
private :
	string nom;

public:
	compagnie();
	compagnie(string nom,int* ptLoyer=NULL , int prixAchat=0, Case* suivante=NULL, joueur* ptProprietaire=NULL);
	virtual ~compagnie();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur(joueur* ptJoueur);
};

#endif /* COMPAGNIE_H_ */
