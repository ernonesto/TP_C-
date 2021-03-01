#include "Animal.hpp"
#include <string>


Animal::Animal()
{
}

Animal::Animal(string le_Type, string le_Nom, float le_Poids, string le_Detailles, float le_Viande, float le_Fruits, float le_Herbes)
        : type(le_Type), nom(le_Nom), poid(le_Poids), details(le_Detailles), viande(le_Viande), fruits(le_Fruits), herbe(le_Herbes)
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
