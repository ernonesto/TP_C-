#include "Rhinoceros.hpp"
#include <string>

    Rhinoceros::Rhinoceros(string nNom, float nPoid, int nEspace) : Animal("Rhinoceros", nNom, nPoid, " Espace : " + std::to_string(nEspace), 0, getFruitsQuotidienne(), getHerbsQuotidienne()),
    espace(nEspace)
    {
    }
    float Rhinoceros::getFruitsQuotidienne() const { return getPoid() * .005; };
    float Rhinoceros::getHerbsQuotidienne() const
    {
        float besoin = getPoid() * .02;
        float veget = espace / 100;
        if(veget < besoin) {
            return besoin - veget;
        }
        return 0;
    }
    string Rhinoceros::getRhinoNom() const {return getNom();};
    float Rhinoceros::getRhinoPoid() const {return getPoid();};
    string Rhinoceros::getEspace() const {return (" Enclos de " + std::to_string(espace)); };
    
    Rhinoceros::~Rhinoceros()
    {
    }

