#ifndef ANIMAL_HPP
#define ANIMAL_HPP
using namespace std;
#include <string>

//Create class Animal
class Animal
{
public:
    Animal();
    ~Animal();
    Animal(string nType, string nNom, float nPoid, string nDetails, float nViande, float nFruits, float nHerbe);
    string getType() const ;
    string getNom() const ;
    float getViande() const ;
    float getFruits() const ;
    float getHerbe() const ;
    float getPoid() const ;
    string getDetails() const ;
    
private:
    string type;
    string nom;
    float poid;
    string details;
    float viande;
    float fruits;
    float herbe;

};

#endif // ANIMAL_HPP
