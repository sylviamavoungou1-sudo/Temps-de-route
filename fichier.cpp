#include "fichier.hpp"
#include <fstream>
#include <sstream>

std::vector<Ville> lireVilles(const std::string& fichier) {
    std::vector<Ville> villes;
    std::ifstream f(fichier);
    std::string ligne;

    // Ignorer l'en-tête
    std::getline(f, ligne);

    while (std::getline(f, ligne)) {
        // on va parser ici
    }

    return villes;
}