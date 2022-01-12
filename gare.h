#ifndef GARE_H_
#define GARE_H_
#include <string>
#include "propriete.h"

class gare: public propriete {
private  :
	string nom ;
public:
	gare(string nom,int loyer , int prixAchat,Case* suivante);
	virtual ~gare();
	void setNom(string Nom){this->nom =Nom;};
	string getNom(){return this->nom;};
	void arreterSur(joueur* ptjoueur);
};

#endif /* GARE_H_ */
