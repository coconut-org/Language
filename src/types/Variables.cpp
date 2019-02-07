#include "Variables.h"
#include <algorithm>

const std::vector<std::string> Variables::variables = {"Integer", "Float", "Array", "Bin", "Oct", "Bin", "Hex", "String"};

bool Variables::IsVariable(const std::string &e)
{
  if (variables.empty())
    return false;

  if (std::find(variables.begin(), variables.end(), e) != variables.end())
    return true;

  return false;
}