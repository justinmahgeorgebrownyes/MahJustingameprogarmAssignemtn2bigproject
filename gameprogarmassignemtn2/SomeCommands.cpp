#include "SomeCommands.h"






string SomeCommands::aCommand(string line)
{
	auto first_token = line.substr(0, line.find(' '));
	return string(first_token);
}

void SomeCommands::checkCommand()
{
}

