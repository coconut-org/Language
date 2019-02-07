#include "Funciones.h"

#include <algorithm>

const std::vector<std::string> Funciones::funciones = {"Print", "Read", "WaitUntil"};

bool Funciones::IsFuncion(const std::string &e)
{
  if (funciones.empty())
    return false;

  if (std::find(funciones.begin(), funciones.end(), e) != funciones.end())
    return true;

  return false;
}