/*
 * Terrain.cpp
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#include "Terrain.h"

Terrain::Terrain(string nom,  string couleur, int prixAchat, int* ptLoyer, Case* suivante, joueur* ptProprietaire):propriete(nom, ptLoyer, prixAchat, suivante) {
	this->couleur = couleur ;
}

void Terrain::arreterSur(joueur* ptJoueur){
	if (ptProprietaire == NULL){
		string reponse;
		cout<< "le bien est disponible. Son prix est de "<<this->prixAchat<<". Souhaitez-vous l'acheter ?"<<endl;
		cin>> reponse;
		if (reponse == "oui") {
			ptJoueur->debiter(prixAchat);
			cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << ptJoueur->getSolde();
		} //Il faut ajouter la propriÃ©tÃ© Ã  la liste des propriÃ©tÃ©s du joueur.
		else{
			cout<< "Vous avez dÃ©cidÃ© de ne pas acheter cette propriÃ©tÃ©"<<endl;
		}
	}
	else{
		int loyer = ptLoyer[nMaison]; //On adapte le loyer en fonction du nombre de maison qu'il y a (ptLoyer[0]->0 maison et ptLoyer[5]->1 hotel)
		cout << "Vous etes tombe sur la case " << this->nom << ", vous devez payer "<< loyer << " E."<< endl;
		ptProprietaire->crediter(loyer);
		ptJoueur->debiter(loyer);

}


Terrain::~Terrain() {
	// TODO Auto-generated destructor stub
}
