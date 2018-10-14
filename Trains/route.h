#pragma once
#include <string>

using std::string;

class Route
{
public:
	char origin;
	char destination;
	int distance;

	Route(string raw_route);
};