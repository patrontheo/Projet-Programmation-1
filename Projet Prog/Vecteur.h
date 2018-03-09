#pragma once
#include <vector>



typedef std::vector<double> coord;

class Vecteur {
private:
    
    coord vec;
    
public:
    
    void augmente(double x);
    
    void set_coord(int i, double x);
    void affiche() const;
    bool compare(Vecteur autre);
    Vecteur addition(Vecteur autre) const;
    Vecteur soustraction(Vecteur autre) const;
    double prod_scal(Vecteur autre) const;
    double norme();
    double norme2();
    Vecteur oppose() const;
    Vecteur mult(double l) const;
    Vecteur prod_vect(Vecteur vec2) const;
};



