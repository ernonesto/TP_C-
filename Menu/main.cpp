#include <iostream>
#include <vector>
#include "Animal.hpp"
#include "Singe.hpp"
#include "Tigre.hpp"
#include "Rhinoceros.hpp"
using  namespace std;

struct Diete
{
    float totalViande = 0;
    float totalFruits = 0;
    float totalHerbs = 0;
};

 
 void showMenu()
{
   //   Menu pour demande l'ajout des animaux 
   
    std::cout << "=== MENU ===" << std::endl;
    std::cout << "  1. Ajouter un Tigre" << std::endl;
    std::cout << "  2. Ajouter un Singe" << std::endl;
    std::cout << "  3. Ajouter un Rhinoceros" << std::endl;
    std::cout << "  4. Afficher un compte-rendu du  parc ou le diete" << std::endl;
    std::cout << "  5. Quitter" << std::endl;
    std::cout << "Votre choix : ";
}
 // Création de méthode pour ajouter des Tigres
 
Tigre addNewTigre()
{
    string tigerNom;
    float tigerPoid;
    cout<<"Entrez le nom du tigre: " << '\n';
    cin >> tigerNom;
    cout<<"Entrez le poid du tigre: " << '\n';
    cin >> tigerPoid;
    Tigre tiger (tigerNom, tigerPoid);
    return tiger;
}

 // Création de méthode pour ajouter des Singes
 
Singe addNewSinge()
{
    string singeNom, enclos;
    float singePoid;
    //"Enclos sans herbe"
    cout<<"Entrez le nom du singe: " << '\n';
    cin >> singeNom;
    cout<<"Entrez le poid du singe: " << '\n';
    cin >> singePoid;
    do {
        cout<<"Est-ce que enclose avec herbe? (oui/non)"<< '\n';
        cin >> enclos;
    } while (enclos !="oui" && enclos !="non");
    if(enclos == "oui") {
        Singe singe(singeNom, singePoid, " Enclose avec herbe");
        return singe;
    }
    else {
        Singe singe(singeNom, singePoid, " Enclose sans herbe");
        return singe;
    }
}

// Création de méthode pour ajouter des Rhinoceros

Rhinoceros addNewRhinoceros()
{
    string rinoNom;
    int enclos;
    float rinoPoid;
    //"Enclos sans herbe"
    cout<<"Entrez le nom du rhinoceros: " << '\n';
    cin >> rinoNom;
    cout<<"Entrez le poid du rhinoceros: " << '\n';
    cin >> rinoPoid;
    do {
        cout<<"Entrez superficie d'enclos"<< '\n';
        cin >> enclos;
    } while (enclos <=0);
    Rhinoceros rhino (rinoNom, rinoPoid, enclos);
    return rhino;
}

//Création de méthode pour afficher le compte - rendu

 void afficherCompte(vector<Animal> animals, Diete diete)
{
    for(int i=0; i<animals.size(); i++)
    {
        cout<<animals.at(i).getType()<<": "<<animals.at(i).getNom()<<" ("<<animals.at(i).getPoid()<<" kg)"<<'\n';
        if(animals.at(i).getType() != "Tigre")cout<<animals.at(i).getDetails()<<'\n';
        cout<<" Mange "<<animals.at(i).getViande()<<" kg de viande par jour"<<'\n';
        cout<<" Mange "<<animals.at(i).getFruits()<<" kg de fruits par jour"<<'\n';
        cout<<" Mange "<<animals.at(i).getHerbe()<<" kg d'herbe par jour"<<'\n'<< '\n';
    }
    cout<<"Diete quotidienne totale :"<<'\n';
    cout<<" Viande : "<<diete.totalViande<<" kg"<<'\n';
    cout<<" Fruits : "<<diete.totalFruits<<" kg"<<'\n';
    cout<<" Herbe : "<<diete.totalHerbs<<" kg"<<'\n';
}
 
int main()
{
  // Affichage du Menu
  
  int choix ;
  std::string nom;
  float poids;
  vector<Animal> dyn_arr;
  Diete diete;
  do
  {
    showMenu();
    cin >> choix;
    if(sizeof(dyn_arr) < 250)
    {
            
            
        switch(choix) 
        {
             case 1:
             {
                Tigre currentTiger = addNewTigre();
                Animal newTigre("Tigre", currentTiger.getTigerNom(), currentTiger.getTigerPoid(), "-", currentTiger.getViandeQuotidienne(), 0, 0);
                dyn_arr.push_back(newTigre);
                diete.totalViande += currentTiger.getViandeQuotidienne();
                 break;   
             }
            case 2:
            {
                Singe currentSinge = addNewSinge();
                Animal newSinge("Singe", currentSinge.getSingeNom(), currentSinge.getSingePoid(), currentSinge.getEnclose(), currentSinge.getViandeQuotidienne(), currentSinge.getFruitsQuotidienne(), currentSinge.getHerbsQuotidienne());
                dyn_arr.push_back(newSinge);
                diete.totalViande += currentSinge.getViandeQuotidienne();
                diete.totalFruits += currentSinge.getFruitsQuotidienne();
                diete.totalHerbs += currentSinge.getHerbsQuotidienne();
                break;
            }
            case 3:
            {
                Rhinoceros currentRhinoceros = addNewRhinoceros();
                Animal newRhinoceros("Rhinoceros", currentRhinoceros.getRhinoNom(), currentRhinoceros.getRhinoPoid(), currentRhinoceros.getEspace(), 0, currentRhinoceros.getFruitsQuotidienne(), currentRhinoceros.getHerbsQuotidienne());
                dyn_arr.push_back(newRhinoceros);
                diete.totalFruits += currentRhinoceros.getFruitsQuotidienne();
                diete.totalHerbs += currentRhinoceros.getHerbsQuotidienne(); 
                break;
            }
            case 4:
            {
                afficherCompte(dyn_arr, diete);
                break;
            }
            case 5:
            {
                vector<Animal>().swap(dyn_arr);
                cout << "Merci d'avoir utilise notre logiciel";
                exit(1);
              break; 
            }
            default: 
                cout << "choix invalide Veuillez faire un autre choix"  << endl;
                break;
        }
    }
    else
    {
    cout<<"L'organisation n'aura jamais plus de 250 animaux" << '\n'<<'\n';
    }        
 
  }while(choix!= 5);
}  