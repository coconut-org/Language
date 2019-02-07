#include "Operandos.h"

#include <algorithm>

const std::vector<std::string> Operandos::operandos = {"/", "+", "-", "*"};

bool Operandos::IsOperando(const std::string &e)
{
  if (operandos.empty())
    return false;

  if (std::find(operandos.begin(), operandos.end(), e) != operandos.end())
    return true;

  return false;
}