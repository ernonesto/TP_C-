#ifndef RHIROCEROS_HPP
#define RHIROCEROS_HPP
#include "Animal.hpp"
#include <string>

//La classe Rhinoceros permet de créer un Rhinoceros

class Rhinoceros : public Animal

{
private:
    int espace;

public:

// constructeur

    Rhinoceros(string nNom, float nPoid, int nEspace);
    
// Destricteur   

    ~Rhinoceros();
    
    float getFruitsQuotidienne() const ;
    float getHerbsQuotidienne() const ;
    std::string getRhinoNom() const;
    float getRhinoPoid() const;
    string getEspace() const;
};

#endif // RHIROCEROS_HPP
