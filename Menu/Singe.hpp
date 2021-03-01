#ifndef SINGE_HPP
#define SINGE_HPP
#include "Animal.hpp"
#include <string>

//La classe singe permet de créer un singe

class Singe : public Animal
{
    
private:
    std::string enclose;
public:

// Constructeur

    Singe(string nNom, float nPoid, string nEnclose);
    
// Destructeur
    
    ~Singe();
    
    std::string getSingeNom() const;
    float getSingePoid() const;
    float getViandeQuotidienne() const;
    float getFruitsQuotidienne() const;
    float getHerbsQuotidienne() const;
    std::string getEnclose() const ;
};

#endif // SINGE_HPP
