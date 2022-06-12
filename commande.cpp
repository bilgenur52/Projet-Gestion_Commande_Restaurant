#include <iostream>
#include "menu.h"
#include "commande.h"
#include "client.h"

commande::commande() 
{
    m_menu = new menu();
    c_client = new client();
} 

commande::commande(string nom,string prenom,int mode_de_paiement,int entree,int plat,int dessert)
{   
    c_client = new client(nom,prenom,mode_de_paiement);
    m_menu = new menu(entree,plat,dessert);
}


void commande::set_commande(client &client1 ,menu &menu1) 
{   
    c_client = &client1;
    m_menu = &menu1;
}


void commande::getafficher_commande()
{
    get_afficherclient();
    get_affichermenu();
}

    void commande::get_affichermenu()
    {   cout<<"le menu choisi est :"<<endl;
        if(m_menu->get_entree()==1){
            cout<<"Carpaccio de boeuf fraichement tranche 8,5 euros"<<endl;
            }
        else if(m_menu->get_entree()==2)
        {
            cout<<"Bruschetta saumon ( 2 pieces) 5,5 euros"<<endl;
        }
        else if(m_menu->get_entree()==3){
            cout<<"Bouchee a la reine 8,5 euros"<<endl;
        }
        else 
        {
            cout<<"pas d'entree "<<endl;
        }
    cout<<"-------------"<<endl;
        if(m_menu->get_plat()==1){
        cout<<"Pizza Diavolata 11 euros"<<endl;}
        else if(m_menu->get_plat()==2){
            cout<<"Escalope Florentina 15 euros"<<endl;
        }
        else if(m_menu->get_plat()==3){
            cout<<"Pates Pesto aux choix : Tagliatelles, Penne ou Spaghetti 10 euros "<<endl;
        }
        else{
            cout<<"pas de plat "<<endl;
        }
    cout<<"-------------"<<endl;
        if(m_menu->get_dessert()==1){
            cout<<"Tiramisu 5 euros"<<endl ; 
        }
        else if(m_menu->get_dessert()==2){
            cout<<"Moelleux au chocolat 5 euros"<<endl ;  
        } 
        else if(m_menu->get_dessert()==3){
            cout<<"Cafe gourmand 5 euros"<<endl ; 
        }
        else if(m_menu->get_dessert()==4){
            cout<<"Boissons Cafe 1,9 euros"<<endl; 
        }
        else if(m_menu->get_dessert()==5){
            cout<<"Bouteille d'eau 4,9 euros"<<endl ;
        }
        else if(m_menu->get_dessert()==6){
            cout<<"Demi-bouteille d'eau 3 euros"<<endl ;
        }
        else{
            cout<<"Pas de dessert "<<endl;
        }
    }

    void commande::get_afficherclient()
    {
        cout<<"Client :"<<endl;
        cout<<c_client->get_affichernom()<<"  ";
        cout<<c_client->get_afficherprenom()<<endl;
        if(c_client->get_mode_de_paiement()==1)
        {cout<<"paiement en espece"<<endl;}
        else if(c_client->get_mode_de_paiement()==2)
        {cout<<"paiement en carte bleue"<<endl;}
        else 
        {cout<<"paiement inconnu"<<endl;}
    }

    void commande::modifiermenu()
    {
        m_menu->afficherlemenu();
    }

    void commande::supprimermenu()
    {
        m_menu->set_entree(4);
        m_menu->set_plat(4);
        m_menu->set_dessert(7);
    }