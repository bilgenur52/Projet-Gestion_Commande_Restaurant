#ifndef COMMANDE_H
#define COMMANDE_H 
#include <iostream>
#include "menu.h"
#include "client.h"
using namespace std;

class commande
{
private:
    client *c_client;
    menu *m_menu;
public:
    commande(); //initialiser les valeurs par defaux
    commande(string,string,int,int,int,int); //initialiser les attribus du client et menu
void set_commande(client&,menu&); //affecter le menu et client
    void getafficher_commande();
    void get_affichermenu();
    void get_afficherclient();
    void modifiermenu();
    void supprimermenu();

};

#endif