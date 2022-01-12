/*
 * gare.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */
#include "joueur.h"
#include "gare.h"

gare::gare(string nom,int loyer , int prixAchat,Case* suivante):propriete(nom,loyer,prixAchat,suivante) {
	this->nom = nom;
	this->loyer = loyer;
	this->prixAchat = prixAchat;
}

void gare::arreterSur(){
	ptjoueur = ;// mettre le pointeur du joueur qui est tombé sur la case
	if (proprietaire =="none"){
		string reponse
		cout << "Vous êtes tombé sur la case " << this->nom <<" Cette propriété n'appartient à personne. Souhaitez-vous l'acheter pour "<< prixAchat << "E ?"<<endl;
		cin >> reponse;
		if (reponse == Oui) {
			joueur.setSolde(joueur.getSolde - prixAchat);
			cout<<"Vous avez acheté la propriété "<< this->nom << ". Votre solde est maintenant de " << joueur.getSolde;
		} //Il faut ajouter la propriété à la liste des propriétés du joueur.
		else{
			cout<< "Vous avez décidé de ne pas acheter cette propriété"<<endl;
		}
	}
	else{
		this->loyer = 25* proprietaire.getGare(); //Fonction qui n'existe pas pour l'instant: elle va chercher le nombre de gare que possède un joueur
		//Le prix est différent en fonction du nombre de gare que le propriétaire possède.
		cout << "Le propriétaire de cette case est "<< proprietaire << " vous lui devez " << loyer<<endl;
		joueur.setSolde(joueur.getSolde - this->loyer); //le joueur paye le locataire le prix du loyer
		proprietaire.setSolde(joueur.setSolde + this->loyer);
	}
}
gare::~gare() {
	// TODO Auto-generated destructor stub
}
