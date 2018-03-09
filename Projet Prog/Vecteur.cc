#include <iostream>
#include <vector>
#include <cmath>
#include "Vecteur.h"

//test git
iji

using namespace std;

typedef std:: vector<double> coord;


void Vecteur :: augmente(double x)
{
    vec.push_back(x);
}

void Vecteur ::set_coord(int i, double x)
{
    if (vec.size() > i)
    {
        vec[i] = x;
    }
    else
    {
        cout << "Erreur de dimension : la case " << i << " n'existe pas !";
    }
}


void Vecteur:: affiche() const
{
    for (size_t i(0); i < vec.size(); ++i)
    {
        cout << vec[i] << " ";
    }
}


bool Vecteur::compare(Vecteur autre)
{
    size_t i(vec.size());
    size_t j(autre.vec.size());
    if (j == i)
    {
        for (size_t k(0); k < i; ++k)
        {
            if (vec[k] != autre.vec[k])
            {
                return false;
            }
        }
    }
    else
    {
        return false;
    }
    return true;
}


Vecteur Vecteur:: addition(Vecteur autre) const
{
    Vecteur resultat;
    for (size_t i(0); fmin(vec.size(), autre.vec.size()) > i; ++i)
    {
        resultat.vec.push_back(vec[i] + autre.vec[i]);
    }
    return resultat;
}


Vecteur Vecteur::soustraction(Vecteur autre) const
{
    
    Vecteur resultat;
    for (size_t i(0); fmin(vec.size(), autre.vec.size()) > i; ++i)
    {
        resultat.vec.push_back(vec[i] - autre.vec[i]);
    }
    return resultat;
}

double Vecteur:: prod_scal(Vecteur autre) const
{
    double resultat(0.0);
    for (size_t i(0); i < fmin(vec.size(), autre.vec.size()); ++i)
    {
        resultat += vec[i] * autre.vec[i];
    }
    
    return resultat;
}


double Vecteur:: norme()
{
    double norme;
    double provisoire(0.0);
    for (size_t i(0); i < vec.size(); ++i)
    {
        provisoire += vec[i] * vec[i];
    }
    norme = sqrt(provisoire);
    return norme;
}


double Vecteur::norme2()
{
    double norme_carre(0.0);
    for (size_t i(0); i < vec.size(); ++i)
    {
        norme_carre += vec[i] * vec[i];
    }
    return norme_carre;
    
}

Vecteur Vecteur:: oppose() const
{
    Vecteur resultat;
    for (auto element : vec)
    {
        resultat.vec.push_back(-element);
    }
    return resultat;
    
}

Vecteur Vecteur:: mult(double l) const
{
    Vecteur resultat;
    for (auto element : vec)
    {
        resultat.vec.push_back(l*element);
    }
    return resultat;
}

Vecteur Vecteur:: prod_vect(Vecteur vec2) const
{
    if (vec.size() != 3 or vec2.vec.size() != 3)
    {
        throw string("erreur de dimension");
    }
    Vecteur resultat;
    resultat.vec.push_back(vec[1] * vec2.vec[2] - vec2.vec[1] * vec[2]);
    resultat.vec.push_back(vec[2] * vec2.vec[0] - vec2.vec[2] * vec[0]);
    resultat.vec.push_back(vec[0] * vec2.vec[1] - vec2.vec[0] * vec[1]);
    return resultat;
}







