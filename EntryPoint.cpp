#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <utility>

int main(int argc, char const *argv[])
{
	std::string line;
	std::string file = "hola.ccn";
	std::string id;
	std::string letter;
	std::ifstream connection;
	std::string actual = " ";
	connection.open(file);
	if (connection.is_open())
	{
		while (getline(connection, line))
		{
			std::string aux = "";
			while (line.length() != 0)
			{
				letter = line.substr(0, 1);
				line.erase(0, 1);
				if (letter == actual)
				{

					aux = "";
				}
				else
				{
					aux += letter;
				}
			}
		}
	}
	return 0;
}

// class Delimitador
// {
// public:
// 	static bool esDelimitador(const std::string &l)
// 	{
// 	}
// };

// enum Type
// {
// 	FUNCTION = 1,
// 	DELIMITADOR,
// 	TEXT,
// 	OPERANDO
// };

// std::vector<std::string> delimitadores = {"\"", "'"};
// std::vector<std::string> operandos = {"/", "+", "-", "*"};
// ./compiler.sh
// ola puerk
/*
id:Print
PARAMI:"
Txt:kjhhfdjkghjk
PARAMF:"
*/