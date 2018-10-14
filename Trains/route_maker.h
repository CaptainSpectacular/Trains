#pragma once
#include <string>
#include "graph.h"
#include "route.h"
#include "edge.h"

using std::string;

class RouteMaker
{
public:
	RouteMaker(Graph* graph);
	void insert_route(Route* route);

private:
	Graph* graph;

	Node* check_or_create(char data);
};