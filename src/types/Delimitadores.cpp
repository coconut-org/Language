#include "Delimitadores.h"

#include <algorithm>

const std::vector<std::string> Delimitadores::delimitadores = {"\"", "'", "{", "}", "(", ")"};

bool Delimitadores::IsDelimitador(const std::string &e)
{
  if (delimitadores.empty())
    return false;

  if (std::find(delimitadores.begin(), delimitadores.end(), e) != delimitadores.end())
    return true;

  return false;
}