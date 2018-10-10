#pragma once
#include <string>

using std::string;

class Route
{
public:
	string route;

	Route(string route);
	int distance();
	char origin();
	char destination();
};