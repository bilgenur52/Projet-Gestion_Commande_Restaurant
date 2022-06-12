#include <iostream>
#include "menu.h"

 
  
menu::menu()
  {
    entree = 4;
    plat = 4;
    dessert = 7;
  } 

menu::menu(int ent,int plt,int dess)
{
  entree=ent;
  plat=plt;
  dessert=dess;
}
void menu::afficherlemenu()
  {
      int entree;
      int plat;
      int dessert;
    cout<<"Entree :"<<endl;
    cout<<" 1- Carpaccio de boeuf fraichement tranche 8,5 euros"<<endl;
    cout<<" 2- Bruschetta saumon ( 2 pieces) 5,5 euros"<<endl;
    cout<<" 3- Bouchee a la reine 8,5 euros"<<endl;
    cout<<" 4- Suivant"<<endl;
    cout<<"taper entre 1 et 3 pour choisir l'entree ou 4 pour suivant"<<endl;
    cin>>entree;
    set_entree(entree);

    cout<<"Plat :"<<endl;
    cout<<" 1- Pizza Diavolata 11 euros"<<endl;
    cout<<"Tomate, sauce picante, Mozarella, jambon et viande hachee"<<endl;
    cout<<" 2- Escalope Florentina 15 euros"<<endl;
    cout<<"Escalope, Aubergine, sauce napolitaine, Mozarella Al forno"<<endl;
    cout<<" 3- Pates Pesto Aux choix : Tagliatelles, Penne ou Spaghetti 10 euros "<<endl;
    cout<<"Basilic, copeaux de Parmesan, pignons de pin"<<endl;
    cout<<" 4- Suivant"<<endl;
    cout<<"taper entre 1 et 3 pour choisir le plat ou 4 pour suivant"<<endl;
    cin>>plat;
    set_plat(plat);
    
    cout<<"Dessert :"<<endl;
    cout<<" 1- Tiramisu 5 euros"<<endl ;
    cout<<" 2- Moelleux au chocolat 5 euros"<<endl ;
    cout<<" 3- Cafe gourmand 5 euros"<<endl ;
    cout<<" 4- Boissons Cafe 1,9 euros"<<endl ;
    cout<<" 5- Bouteille d eau 4,9 euros"<<endl ;
    cout<<" 6- Demi-bouteille d'eau 3 euros"<<endl ;
    cout<<" 7- Suivant"<<endl;
    cout<<"taper entre 1 et 6 pour choisir le plat ou 7 pour suivant"<<endl;
    cin>>dessert;
    set_dessert(dessert);
  } 
  
    
    void menu::set_entree(int ent)
    {
      entree = ent;
    }

    void menu::set_plat(int plt)
    {
      plat = plt;
    }

    void menu::set_dessert(int des)
    {
      dessert = des;
    }

int menu::get_entree()
{
  return entree;
}

int menu::get_plat()
{
  return plat;
}

int menu::get_dessert()
{
  return dessert;
}