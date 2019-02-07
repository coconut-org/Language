#ifndef __FUNCIONES_H__
#define __FUNCIONES_H__

#include <iostream>
#include <vector>

class Funciones
{
public:
  static const std::vector<std::string> funciones;
  static bool IsFuncion(const std::string &);
  static std::string tree();
};

#endif // __FUNCIONES_H__