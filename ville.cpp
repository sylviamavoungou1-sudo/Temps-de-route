#include <iostream>
#include <fstream>
#include "ville.hpp"


Ville :: Ville (int id, const std::string& nom, double lon, double lat, int pop)
:id(id), nom(nom), longi(lon), lat(lat), pop(pop)
{};

