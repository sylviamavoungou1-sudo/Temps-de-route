#ifndef VILLE_HPP
#define VILLE_HPP

#include <string>

class Ville 
{
  private:
    int id;          // Identifiant numérique entre 0 et 98 [cite: 26]
    std::string nom;
    double longi;
    double lat;
    int pop;

  public:
    // Constructeur
    Ville(int id, std::string nom, double lon, double lat, int pop);

    // Getters indispensables pour la suite
    int getId() const { return id; }
    std::string getNom() const { return nom; }
    
    // Utile pour dessiner le trajet sur la carte plus tard (bonus) [cite: 64]
    double getLat() const { return lat; }
    double getLong() const { return longi; }
};

#endif