#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#include <iostream>
#include <vector>

class Funciones
{
private:
  static const std::vector<std::string> funciones;

public:
  static bool IsFuncion();
  static std::string tree();
};

#endif // __FUNCIONES_H__