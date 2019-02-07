#include <string>
#include <algorithm>

#include "Lexer.h"
#include "../types/Delimitadores.h"
#include "../types/Operandos.h"
#include "../types/Types.h"
#include "../types/Funciones.h"
#include "../types/Variables.h"

void Lexer::procesador(std::string &line)
{
  std::string letter = "";
  std::string helper = "";
  std::string aux = "";
  std::string actual = " ";

  while (line.length() != 0)
  {
    letter = line.substr(0, 1);
    line.erase(0, 1);
    if (Delimitadores::IsDelimitador(letter))
    {
      getType(aux, actual);
      getType(letter, "");
      actual = letter;
      aux = "";
    }
    else if (letter == " " && !Delimitadores::IsDelimitador(actual))
    {
      if (line.length() > 0)
      {
        helper = line.substr(0, 1);
        if (!Delimitadores::IsDelimitador(helper))
        {
          getType(aux, "");
          aux = "";
        }
      }
    }
    else
    {
      if (Delimitadores::IsDelimitador(actual) || letter != " ")
        aux += letter;
    }
  }
  if (aux != "")
    getType(aux, "");
}

bool Lexer::check(const std::string &variable)
{
  if (WaitForVar)
  {
    WaitForVar = false;
    vars.push_back(variable);
    return true;
  }

  if (std::find(vars.begin(), vars.end(), variable) != vars.end())
    return true;

  return false;
}

void Lexer::assign()
{
  WaitForVar = true;
}

void Lexer::getType(const std::string &value, const std::string &actual)
{
  std::pair<Type, std::string> dupla;
  dupla.second = value;

  if (Delimitadores::IsDelimitador(value))
    dupla.first = DELIMITER;
  else if (Operandos::IsOperando(value))
    dupla.first = OPERAND;
  else if (Variables::IsVariable(value))
  {
    dupla.first = DATATYPE;
    assign();
  }
  else if (actual == " " || Funciones::IsFuncion(value))
    dupla.first = FUNCTION;
  else if (check(value))
    dupla.first = VARIABLE;
  else
    dupla.first = TEXT;

  lista.push_back(dupla);
}

void Lexer::print()
{
  for (std::pair<Type, std::string> &p : lista)
  {
    switch (p.first)
    {
    case OPERAND:
      std::cout << "OPERAND\t\t";
      break;
    case FUNCTION:
      std::cout << "FUNCTION\t";
      break;
    case DELIMITER:
      std::cout << "DELIMITER\t";
      break;
    case TEXT:
      std::cout << "TEXT\t\t";
      break;
    case VARIABLE:
      std::cout << "VARIABLE\t";
      break;
    case DATATYPE:
      std::cout << "DATATYPE\t";
      break;
    default:
      break;
    }
    std::cout << p.second << std::endl;
  }
}