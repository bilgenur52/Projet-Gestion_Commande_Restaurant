#include <iostream>
#include <string.h>
#include "menu.h"
#include "client.h"
#include "commande.h"

using namespace std;


int main()
{   int choix_gerant;
    int id;
    client tableau_client[30];
    commande tableau_commande[30];
    menu tableau_menu[30];
    int indexclient=0;
    string mdp = "ozdemir1";
    string x;
    int choix;
    do{
    cout<<"Bienvenue dans l'application"<<endl;
    cout<<"1. Identifiant client "<<endl;
    cout<<"2. Identifiant gerant "<<endl;
    cout<<"Vous etes :";
    cin>>id;
    if(id==1)
{   
    tableau_client[indexclient].inscription();
    tableau_menu[indexclient].afficherlemenu();
    tableau_commande[indexclient].set_commande(tableau_client[indexclient],tableau_menu[indexclient]);
//    commande com1 = commande(tableau_client[indexclient],tableau_menu[indexclient]);
    tableau_commande[indexclient].getafficher_commande();
    //indexclient++ ;
    cout<<endl<<"1. modifier la commande "<<endl;
        cout<<"2. supprimer la commande "<<endl;
        cout<<"3. continuer "<<endl;
        cin>>choix;
        if(choix==1)
        {
            tableau_commande[indexclient].modifiermenu();
           // tableau_commande[indexclient].set_commande(tableau_client[indexclient],tableau_menu[indexclient]);
            tableau_commande[indexclient].getafficher_commande();
        }
        else if(choix==2)
        {
            tableau_commande[indexclient].supprimermenu();
           // tableau_commande[indexclient].set_commande(tableau_client[indexclient],tableau_menu[indexclient]);
            tableau_commande[indexclient].getafficher_commande();
        }
        else if (choix==3){cout<<"commande a ete validee"<<endl;}
        else {cout<<"choix na pas ete compris ";}
        indexclient++ ;
    

}
    else if(id==2)
{
        
    cout << "Entrez le mot de passe du gerant: ";
    cin >> x;
    if (x==mdp)
    {   
        cout << "Mot de passe correct" <<endl;
        cout<<"Quelle operation voulez-vous effectuer ?"<<endl;
        cout<<"1. Consulter les informations des clients"<<endl;
        cout<<"2. Verifier la recette du jour"<<endl;
        cin>>choix_gerant;
        if(choix_gerant==1)
    {   int i=0;
        for(i=0;i<indexclient;i++)
        {
            tableau_commande[i].getafficher_commande();
        }

    }
    else if(choix_gerant==2)
    {
    cout<<"------Recette du jour------"<<endl;
    cout<<"Entree : Bruschetta saumon ( 2 pièces) 5,5 euros"<<endl;
    cout<<"Plat : Spaghetti au Basilic 10 euros "<<endl;
    cout<<"Dessert : Tiramisu 5 euros "<<endl;
    }
    }
    else{
        cout << "mot de passe incorrect" << endl;
    }
}
    else 
    {
        cout<<"votre reponse n'a pas ete compris."<<endl;
    }
 
    }while (1); //et retour au menu du client
}
//x!=1

/*  commande commande1(); //pour un seul client
        client client1;
        menu menu1;
        int choix;
        client1[30].inscription();
        menu1.afficherlemenu();
        commande commande2(client1.get_affichernom(),client1.get_afficherprenom(),client1.get_mode_de_paiement(),menu1.get_entree(),menu1.get_plat(),menu1.get_dessert());
        commande2.getafficher_commande();
        cout<<endl<<"1. modifier la commande "<<endl;
        cout<<"2. supprimer la commande "<<endl;
        cout<<"3. continuer "<<endl;
        cin>>choix;
        if(choix==1)
        {
            commande2.modifiermenu();
            commande2.get_afficherclient();
            commande2.get_affichermenu();
        }
        else if(choix==2)
        {
            commande2.supprimermenu();
            commande2.get_afficherclient();
            commande2.get_affichermenu();
        }
        else if (choix==3){cout<<"commande a ete validee"<<endl;}
        else {cout<<"choix na pas ete compris ";}*/