#include "graphe.hpp"
#include <fstream>
#include <sstream>
#include <cmath>
using namespace std;

const double inf = INFINITY;

Graphe::Graphe() {
    // initialiser la matrice à l'infini
    for (int u = 0; u < 99; u++) {
        for (int v = 0; v < 99; v++) {
            matrice[u][v] = inf;
        }
        matrice[u][u] = 0; // distance d'une ville à elle-même = 0
    }
}

void Graphe::chargerVilles(const std::string& fichier) {
    std::ifstream f(fichier);
    std::string ligne;

    // Ignorer l'en-tête
    std::getline(f, ligne);

    while (std::getline(f, ligne)) {
        std::stringstream ss(ligne);
        std::string token;
        std::vector<std::string> colonnes;

        while (std::getline(ss, token, ',')) {
            colonnes.push_back(token);
        }

        std::string nom = colonnes[0];
        int id          = std::stoi(colonnes[1]);
        double lat      = std::stod(colonnes[3]);
        double lon      = std::stod(colonnes[4]);
        int pop         = std::stoi(colonnes[14]);

        villes.push_back(Ville(id, nom, lon, lat, pop));
    }
}
void Graphe::chargerTemps(const std::string& fichier) {
    // on va remplir ici
}

void Graphe::floydWarshall() {

    for (int k = 0; k < 99; k++) {
        for (int u = 0; u < 99; u++) {
            for (int v = 0; v < 99; v++) {
                if (matrice[u][k] + matrice[k][v] < matrice[u][v]) {
                    matrice[u][v] = matrice[u][k] + matrice[k][v];
                }
            }
        }
    }
}

double Graphe::getTemps(int u, int v) const {
    return matrice[u][v];
}

const std::vector<Ville>& Graphe::getVilles() const {
    return villes;
}












