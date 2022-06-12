#ifndef MENU_H
#define MENU_H 
#include <iostream>

using namespace std;

class menu

{
    private:
    int entree;
    int plat;
    int dessert;

    public :
    menu();
    menu(int,int,int);
    void afficherlemenu();
    void set_entree(int);
    void set_plat(int);
    void set_dessert(int);
    int get_entree();
    int get_plat();
    int get_dessert();
    };
#endif