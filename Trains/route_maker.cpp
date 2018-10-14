#include "route_maker.h"

RouteMaker::RouteMaker(Graph* graph)
{
	this->graph = graph;
}

void RouteMaker::insert_route(Route* route)
{
	Node *origin = check_or_create(route->origin);
	Node *destination = check_or_create(route->destination);

	Edge* edge = new Edge(route->distance, destination);
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
