#include <iostream>
#include <fstream>

#include "src/structures/Lexer.h"

int main(int argc, char const *argv[])
{
	Lexer lexer;

	std::string line;
	std::string file = "hola.ccn";
	std::ifstream reader;
	reader.open(file);
	if (reader.is_open())
	{
		while (getline(reader, line))
			lexer.procesador(line);
		lexer.print();
	}
	return 0;
}