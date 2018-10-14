#pragma once
#include <string>
#include "graph.h"

using std::string;

class RouteMaker
{
public:
	RouteMaker(Graph* graph);
	void insert_route(string route);

private:
	Graph* graph;

	Node* check_or_create(char data);
};