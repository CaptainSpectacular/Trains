#pragma once
#include <string>
#include "graph.h"

using std::string;

class RouteMaker
{
	Graph* graph;
public:

	RouteMaker(Graph* graph);
	void insert_route(string route);
	Node* check_or_create(char data);
};