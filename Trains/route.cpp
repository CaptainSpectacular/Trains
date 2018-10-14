#include "route.h"

Route::Route(string raw_route)
{
	this->origin = raw_route[0];
	this->destination = raw_route[1];
	this->distance = stoi(raw_route.substr(2, raw_route.length()));
}