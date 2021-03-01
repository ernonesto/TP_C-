#include "Animal.hpp"
#include <string>

Animal::Animal()
{
}
Animal::Animal(string nType, string nNom, float nPoid, string nDetails, float nViande, float nFruits, float nHerbe)
        : type(nType), nom(nNom), poid(nPoid), details(nDetails), viande(nViande), fruits(nFruits), herbe(nHerbe)
    {
        }

Animal::~Animal()
{
}

std::string Animal::getType() const { return type; };
std::string Animal::getNom() const { return nom; };
float Animal::getViande() const { return viande; };
float Animal::getFruits() const { return fruits; };
float Animal::getHerbe() const { return herbe; };
float Animal::getPoid() const { return poid; };
std::string Animal::getDetails() const { return details; };
