#ifndef SINGE_HPP
#define SINGE_HPP
#include "Animal.hpp"
#include <string>

class Singe : public Animal
{
public:
    Singe(string nNom, float nPoid, string nEnclose);
    ~Singe();
    std::string getSingeNom() const;
    float getSingePoid() const;
    float getViandeQuotidienne() const;
    float getFruitsQuotidienne() const;
    float getHerbsQuotidienne() const;
    std::string getEnclose() const ;
    
private:
    std::string enclose;
};

#endif // SINGE_HPP
