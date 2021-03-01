#include "Animal.hpp"
#include <string>

#ifndef TIGRE_HPP
#define TIGRE_HPP

//La classe Tigre  permet de créer un Tigre 

class Tigre : public Animal
{
public:

// Constructeur

    Tigre(string nNom, float nPoid);

// Destructeur

    ~Tigre();
    
    float getViandeQuotidienne() const;
    std::string getTigerNom() const ;
    float getTigerPoid() const;
};

#endif // TIGRE_HPP
