#ifndef __LEXER_H__
#define __LEXER_H__

#include <iostream>
#include <string>
#include <vector>
#include <utility>

#include "../types/Types.h"

class Lexer
{
private:
  std::vector<std::pair<Type, std::string>> lista;
  std::vector<std::string> vars;
  bool WaitForVar = false;

public:
  void procesador(std::string &);
  void getType(const std::string &, const std::string &);
  void print();
  void assign();
  bool check(const std::string &);
};

#endif // __LEXER_H__