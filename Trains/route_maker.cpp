#include "route_maker.h"
#include "edge.h"

RouteMaker::RouteMaker(Graph* graph)
{
	this->graph = graph;
}

void RouteMaker::insert_route(string route)
{
	Node *origin = check_or_create(route[0]);
	Node *destination = check_or_create(route[1]);
	int distance = stoi(route.substr(2, route.length()));

	Edge* edge = new Edge(distance, destination);
	origin->insert_edge(edge);
}

Node* RouteMaker::check_or_create(char data)
{
	Node* node = graph->get_node(data);
	if (!node)
	{
		node = new Node(data);
		graph->insert_node(node);
	}

	return node;
}
