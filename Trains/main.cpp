#include <iostream>
#include <string>
#include "edge.h"
#include "node.h"
#include "graph.h"
#include "route_maker.h"
#include "route.h"
#include "graph_analyzer.h"

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
	{
		Route* route = new Route(routes[i]);
		route_maker->insert_route(route);
	}

	size_t size = graph->nodes.size();

	cout << "Total nodes: " << size << endl;
	cout << "Routes: " << endl;

	for (size_t i = 0; i < size; i++)
	{
		cout << "nodes[" << graph->nodes[i]->data << "]: ";
		graph->nodes[i]->print_edges();
		cout << endl;
	}

	GraphAnalyzer* ga = new GraphAnalyzer(graph);
	cout << "Distance Calculations" << endl;
	cout << "A-B-C: " << ga->calculate_distance("A-B-C") << endl;
	cout << "A-D: " << ga->calculate_distance("A-D") << endl;
	cout << "A-D-C: " << ga->calculate_distance("A-D-C") << endl;
	cout << "A-E-B-C-D: " << ga->calculate_distance("A-E-B-C-D") << endl;
	cout << "A-E-D: " << ga->calculate_distance("A-E-D") << endl;
	cin.get();
}