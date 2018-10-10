#include "route.h"

using std::string;

Route::Route(string route)
{
	this->route = route;
}

int Route::distance()
{
	return stoi(route.substr(2, route.length()));
}

char Route::origin()
{
	return route[0];
}

char Route::destination()
{
	return route[1];
}