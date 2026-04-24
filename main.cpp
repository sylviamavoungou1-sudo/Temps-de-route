#include <iostream>
#include "graphe.hpp"

int main() {
    Graphe g;
    g.chargerVilles("villes.csv");
    g.chargerTemps("temps.csv");
    g.floydWarshall();

    // Test : temps entre ville 5 et ville 62 (Aix → Antibes = 106 min)
    std::cout << g.getTemps(5, 62) << " minutes" << std::endl;
    std::cout << g.getVilles().size() << std :: endl;

    for (const Ville& v : g.getVilles()) {
    std::cout << v.getId() << " " << v.getNom() << std::endl;
}

    return 0;
}