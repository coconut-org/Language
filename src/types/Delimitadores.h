#ifndef __DELIMITADORES_H__
#define __DELIMITADORES_H__

#include <iostream>
#include <vector>

class Delimitadores
{
private:
  static const std::vector<std::string> delimitadores;

public:
  static bool IsDelimitador();
  static bool InicioFin();
};

#endif // __DELIMITADORES_H__