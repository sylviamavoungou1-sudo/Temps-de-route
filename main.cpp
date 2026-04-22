#include <iostream>
#include "graphe.hpp"

int main() {
    Graphe g;
    g.chargerVilles("villes.csv");
    g.chargerTemps("temps.csv");
    g.floydWarshall();

    // Test : temps entre ville 5 et ville 62 (Aix → Antibes = 106 min)
    std::cout << g.getTemps(5, 62) << " minutes" << std::endl;

    return 0;
}