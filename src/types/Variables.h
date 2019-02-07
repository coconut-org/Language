#ifndef __VARIABLES_H__
#define __VARIABLES_H__

#include <iostream>
#include <vector>
#include <string>

class Variables
{
public:
  static const std::vector<std::string> variables;
  static bool IsVariable(const std::string &);
};

#endif // __VARIABLES_H__