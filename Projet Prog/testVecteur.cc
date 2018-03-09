#include <iostream>
#include <vector>
#include "Vecteur.h"


using namespace std;

typedef vector<double> coord;

int main()
{
    Vecteur v1;
    Vecteur v2;
    for (int i(0); i < 6; ++i)
    {
        double x;
        cout << "x=";
        cin >> x;
        v1.augmente(x);
    }
    
    for (int i(0); i < 3; ++i)
    {
        double x;
        cout << "x=";
        cin >> x;
        v2.augmente(x);
    }
    Vecteur v3(v1.addition(v2));
    
    Vecteur v4(v1.soustraction(v2));
    double k(v1.prod_scal(v2));
    cout << k << endl;
    Vecteur v6(v1.oppose());
    Vecteur v7(v1.mult(10.0));
    
    Vecteur v8;
    
    try
    {
        v8 = (v1.prod_vect(v2));
    }
    
    catch (string n)
    {
        cerr << n << " un vecteur n'est pas de dimension 3" << endl;
    }
    
    v1.affiche();
    
    v2.affiche();
    v3.affiche();
    v4.affiche();
    v6.affiche();
    v7.affiche();
    v8.affiche();
    
    return 0;
    
    
}


