#include "Tigre.hpp"
#include <string>

Tigre::Tigre(string nNom, float nPoid) : Animal("Tigre", nNom, nPoid, "-", getViandeQuotidienne(), 0, 0)
    {}
    Tigre::~Tigre()
{
}
float Tigre::getViandeQuotidienne() const { return getPoid() * .05; };
std::string Tigre::getTigerNom() const {return getNom();};
float Tigre::getTigerPoid() const {return getPoid();};

