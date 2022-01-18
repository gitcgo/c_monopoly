/*
 * gare.cpp
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */
#include "joueur.h"
#include "gare.h"

gare::gare(string nom, int* ptLoyer, int prixAchat, Case* suivante):propriete(nom,ptLoyer,prixAchat,suivante) {

}

void gare::arreterSur(joueur* ptJoueur){
	if (ptProprietaire == NULL){
		string reponse;
		cout << "Vous etes tombe sur la case " << this->nom <<" Cette propriete n'appartient a  personne. Souhaitez-vous l'acheter pour "<< prixAchat << "E ?"<<endl;
		cin >> reponse;
		if (reponse == "Oui") {
			ptJoueur->debiter(prixAchat);
			cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << ptJoueur->getSolde();
		} //Il faut ajouter la propriÃ©tÃ© Ã  la liste des propriÃ©tÃ©s du joueur.
		else{
			cout<< "Vous avez dÃ©cidÃ© de ne pas acheter cette propriÃ©tÃ©"<<endl;
		}
	}
	else{
		int loyer = ptLoyer[ptJoueur.getGare()-1]; //Fonction qui n'existe pas pour l'instant: elle va chercher le nombre de gare que possede un joueur. On fait -1 car ptLoyer est une liste qui commence à 0.
		//Le prix est diffÃ©rent en fonction du nombre de gare que le propriÃ©taire possÃ¨de.
		cout << "Le proprietaire de cette case est "<< ptProprietaire << " vous lui devez " << loyer<<endl;
		ptJoueur->debiter(loyer); //le joueur paye le locataire le prix du loyer
		ptProprietaire->crediter(loyer);
	}
}
gare::~gare() {
	// TODO Auto-generated destructor stub
}
