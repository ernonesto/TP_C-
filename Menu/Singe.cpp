#include "Singe.hpp"
#include <string>

Singe::Singe(string nNom, float nPoid, string nEnclose) : Animal("Singe", nNom, nPoid, nEnclose, getViandeQuotidienne(), getFruitsQuotidienne(), getHerbsQuotidienne()),
enclose(nEnclose)
{}
std::string Singe::getSingeNom() const {return getNom();};
float Singe::getSingePoid() const {return getPoid();};
float Singe::getViandeQuotidienne() const { return getPoid() * .01; };
float Singe::getFruitsQuotidienne() const { return getPoid() * .01; };
float Singe::getHerbsQuotidienne() const
{
    if(enclose == " Enclose sans herbe") {
        return getPoid() * .005;
    }
    return 0;
};
std::string Singe::getEnclose() const {return enclose;};
Singe::~Singe()
{
}

