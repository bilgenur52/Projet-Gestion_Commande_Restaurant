#include <iostream>
#include "client.h"

client::client()
{
    nom = 'x';
    prenom = 'y';
    mode_de_paiement = 1;
}

client::client(string no,string pre,int mode)
{
    nom = no;
    prenom = pre;
    mode_de_paiement = mode;
}
void client::inscription()
{
        cout<<"Quel est votre nom ?"<<endl;
        cin>>nom;
        set_nom(nom);
        cout<<"Quel est votre prenom"<<endl;
        cin>>prenom;
        set_prenom(prenom);
        cout<<"Quel est votre moyen de paiement ? 1. espece 2. carte bleu"<<endl;
        cin>>mode_de_paiement;
        set_paiement(mode_de_paiement);
}

void client::set_nom(string no)
    {
        nom = no;
    }

void client::set_prenom(string pre)
    {
        prenom = pre;
    }

void client::set_paiement(int mode)
    {
        mode_de_paiement = mode;
    }

string client::get_affichernom()
    {
        return nom;
    }

string client::get_afficherprenom()
    {
        return prenom;
    }

int client::get_mode_de_paiement()
{
    return mode_de_paiement;
}

