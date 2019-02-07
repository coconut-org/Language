#ifndef __OPERANDOS_H__
#define __OPERANDOS_H__

#include <iostream>
#include <vector>
#include <string>

class Operandos
{
public:
  static const std::vector<std::string> operandos;
  static bool IsOperando(const std::string &);
};

#endif // __OPERANDOS_H__