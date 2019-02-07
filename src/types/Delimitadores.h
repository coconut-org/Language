#ifndef __DELIMITADORES_H__
#define __DELIMITADORES_H__

#include <iostream>
#include <vector>

class Delimitadores
{
public:
  static const std::vector<std::string> delimitadores;
  static bool IsDelimitador(const std::string &);
  static bool InicioFin();
};

#endif // __DELIMITADORES_H__