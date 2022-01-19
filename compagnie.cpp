/*
 * compagnie.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "compagnie.h"

compagnie::compagnie(string nom,int loyer , int prixAchat, Case* suivante,joueur* ptProprietaire):propriete(nom,loyer,prixAchat,suivante) {
	// TODO Auto-generated constructor stub
	this->ptProprietaire =NULL;
}

compagnie::~compagnie() {
	// TODO Auto-generated destructor stub
}


void compagnie::arreterSur(joueur* ptJoueur, gobelet Gobelet) {
		joueur Joueur = *ptJoueur; // Ne pas confondre ptJoueur et Joueur
		if (ptProprietaire == NULL){
			string reponse;
			cout<< "La case : "<< this->nom << "est disponible. Son prix est de "<<this->prixAchat<<" €. Souhaitez-vous l'acheter ?"<<endl;
			cin>> reponse;

			if (reponse == "oui") {
				Joueur.debiter(this->prixAchat);
				cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << Joueur.getSolde();
				ptProprietaire = ptJoueur; // maintenant elle appartient à qqn
			} //Il faut ajouter la propriÃ©tÃ© Ã  la liste des propriÃ©tÃ©s du joueur.
			else{
				cout<< "Vous avez décidé de ne pas acheter cette propriété"<<endl;
			}
		}
		else{

			int loyer = 4 * Gobelet.getValeur() ; //On adapte le loyer en fonction du nombre de maison qu'il y a (ptLoyer[0]->0 maison et ptLoyer[5]->1 hotel)
			cout << "Vous êtes tombé sur la case " << this->nom << ", vous devez payer "<< loyer << " € ."<< endl;
			Joueur.crediter(loyer);
			ptJoueur->debiter(loyer);
}
