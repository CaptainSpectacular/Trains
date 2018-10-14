#include <iostream>
#include <string>
#include "edge.h"
#include "node.h"
#include "graph.h"
#include "route_maker.h"

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
	Graph* graph = new Graph();
	RouteMaker* route_maker = new RouteMaker(graph);
	string routes[9] = {"AB5", "BC4", "CD8", "DC8", "DE6", "AD5", "CE2", "EB3", "AE7" };
	for (int i = 0; i < 9; i++)
		route_maker->insert_route(routes[i]);

	size_t size = graph->nodes.size();

	cout << "Total nodes: " << size << endl;
	cout << "Routes: " << endl;

	for (size_t i = 0; i < size; i++)
	{
		cout << "nodes[" << graph->nodes[i]->data << "]: ";
		graph->nodes[i]->print_edges();
		cout << endl;
	}

	cin.get();
}