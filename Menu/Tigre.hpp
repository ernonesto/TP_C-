#include "Animal.hpp"
#include <string>

#ifndef TIGRE_HPP
#define TIGRE_HPP

class Tigre : public Animal
{
public:
    Tigre(string nNom, float nPoid);
    ~Tigre();
    float getViandeQuotidienne() const;
    std::string getTigerNom() const ;
    float getTigerPoid() const;

};

#endif // TIGRE_HPP
