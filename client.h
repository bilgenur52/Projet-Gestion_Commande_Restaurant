#ifndef CLIENT_H
#define CLIENT_H 
#include <iostream>

using namespace std;

class client
{
private:
    string nom, prenom;
    int mode_de_paiement;
 //   string commande;
public:
    client();
    client(string,string,int);
    void inscription();
    void set_nom(string);
    void set_prenom(string);
    void set_paiement(int);
    string get_affichernom();
    string get_afficherprenom();
    int get_mode_de_paiement();
//  void valider_commande();
};
#endif