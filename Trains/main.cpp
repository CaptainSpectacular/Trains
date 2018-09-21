#include <iostream>
#include <vector>
#include <string>
#include "node.h"
#include "edge.h"
#include "graph.h"

using std::cout;
using std::string;
using std::endl;
using std::cin;

int main()
{
	cout << "Starting..." << endl;
	string routes[8] = { "AB9", "BC6", "CD3", "DA4", "DE7", "EB6", "EA7", "CB5" };
	Graph *g = new Graph();

	cout << "Successfully built graph." << endl;
	cout << "Inserting routes..." << endl;
	
	for (int i = 0; i < 8; i++)
	{
		g->new_route(routes[i]);
		cout << "Route " << routes[i] << " created..." << endl;
	}

	cin.get();
}