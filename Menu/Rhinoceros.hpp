#ifndef RHIROCEROS_HPP
#define RHIROCEROS_HPP
#include "Animal.hpp"
#include <string>
class Rhinoceros : public Animal
{
public:
    Rhinoceros(string nNom, float nPoid, int nEspace);
    ~Rhinoceros();
    float getFruitsQuotidienne() const ;
    float getHerbsQuotidienne() const ;
    std::string getRhinoNom() const;
    float getRhinoPoid() const;
    string getEspace() const;
private:
    int espace;
};

#endif // RHIROCEROS_HPP
