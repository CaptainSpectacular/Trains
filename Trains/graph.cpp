#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include "node.h"
#include "route.h"

using std::vector;
using std::string;
using std::cout;
using std::endl;

class Graph
{
public:
	vector<Node*> nodes;

	void new_route(Route* route);

private:
	Node* insert_node(char data);
	Node* node_exists(char data);
};

void Graph::new_route(Route* route)
{
	Node* origin = node_exists(route->origin()); 
	Node* destination = node_exists(route->destination());

	if (!origin)
		origin = insert_node(route->origin());

	if (!destination)
		destination = insert_node(route->destination());

	if (!origin->has_edge(route->destination()))
		origin->insert_edge(route->distance(), destination);
}

Node* Graph::node_exists(char data)
{
	for (size_t i = 0; i < nodes.size(); i++)
	{
		if (nodes[i]->data == data)
			return nodes[i];
	}
	return nullptr;
}

Node* Graph::insert_node(char data)
{
	Node* node = new Node(data);
	nodes.push_back(node);
	return nodes.back();
}
