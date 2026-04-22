#ifndef GRAPHE_HPP
#define GRAPHE_HPP

#include <vector>
#include <string>
#include "ville.hpp"

class Graphe {
  private:
    std::vector<Ville> villes;        // les 99 villes
    double matrice[99][99];           // matrice des temps Floyd-Warshall

public:

    Graphe();                                          // constructeur
    void chargerVilles(const std::string& fichier);   // lit villes.csv
    void chargerTemps(const std::string& fichier);    // lit temps.csv
    void floydWarshall();                             // remplit la matrice
    double getTemps(int u, int v) const;              // retourne le temps entre deux villes
    const std::vector<Ville>& getVilles() const;      // pour l'interface Qt
};

#endif